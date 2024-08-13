<template>
  <div class="h-56 bg-primary-400">
    <span />
  </div>
  <div class="container max-w-md px-4 py-20 mx-auto">
    <img :src="logo" alt="logo" class="w-full mx-auto mb-6 max-w-56">
    <h3 class="mb-4 text-3xl font-semibold text-center">Welcome back!</h3>
    <div class="mb-3">
      <label for="email" class="block mb-1 text-sm font-medium text-surface-600">Email</label>
      <InputText v-model="form.email" class="w-full p-inputtext-rounded-full" placeholder="Email" type="email" :invalid="v$.email.$error" @blur="v$.email.$touch()" />
      <small v-if="v$.email.$error" class="text-red-500">{{ v$.email.$errors[0].$message }}</small>
    </div>
    <div class="mb-6">
      <div class="flex items-center justify-between">
        <label for="email" class="block mb-1 text-sm font-medium text-surface-600">Password</label>
        <a href="#" class="block mb-1 text-sm font-medium underline text-surface-600">Forgot password?</a>
      </div>
      <Password
        v-model="form.password"
        class="w-full"
        :feedback="false"
        toggle-mask
        placeholder="Password"
        type="password"
        :invalid="v$.password.$error"
        :pt="{
        input: (options) => ({
          class: [
            'rounded-full',
            'p-4'
          ]
        })
      }"
        @blur="v$.password.$touch()"
      />
      <small v-if="v$.password.$error" class="text-red-500">{{ v$.password.$errors[0].$message }}</small>
    </div>
    <Button label="Sign In" class="w-full" @click="signInUser" />

    <div class="relative my-8">
      <span class="absolute px-4 font-semibold -translate-x-1/2 -translate-y-1/2 bg-white text-surface-500 top-1/2 left-1/2">OR</span>
      <div class="border-t-2 border-surface-300" />
    </div>

    <div class="flex items-center justify-center gap-8 mb-6">
      <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="google" alt="google">
      </button>
      <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="facebook" alt="facebook" class="size-7">
      </button>
      <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="apple" alt="apple" class="size-8">
      </button>
    </div>

    <p class="mb-4 font-medium text-center text-surface-600">New here? <router-link to="/sign-up" class="underline text-primary-600">Sign Up</router-link></p>
    <p class="mx-auto font-medium text-center text-surface-600 max-w-80">
      <a href="" class="underline text-primary-600">Terms of Conditions</a> and <a href="" class="underline text-primary-600">Privacy Policy</a>.
    </p>
  </div>
</template>

<script setup lang="ts">
import google from "@/assets/icons/google.svg";
import facebook from "@/assets/icons/facebook.svg";
import apple from "@/assets/icons/apple.svg";
import logo from "@/assets/images/logo.webp";
import Button from "primevue/button";
import InputText from "primevue/inputtext";
import Password from "primevue/password";
import { ref, reactive, watch } from "vue";
import { email, minLength, required } from "@vuelidate/validators";
import useVuelidate from "@vuelidate/core";
import { useToast } from "primevue/usetoast";
import useUserStore from "@/store/user"
import { useAuthenticateUser } from "@/hooks/firebase";
import { useRoute, useRouter } from "vue-router";
const router = useRouter();
const route = useRoute();

const userStore = useUserStore();
const toast = useToast();

const form = reactive({
  email: "",
  password: "",
});
const rules = {
  email: { required, email },
  password: { required, minLength: minLength(8) },
};
const v$ = useVuelidate(rules, form);

const { isError: isAuthError, isPending: isAuthPending, isSuccess: isAuthSuccess, data: newAuthedUser, error: authError, mutate: signInOrUp } = useAuthenticateUser();

watch([isAuthPending, isAuthError, isAuthSuccess], ([pending, error, success]) => {
  if (error) {
    toast.add({ severity: "error", summary: "Error", detail: authError });
  }
  if (success) {
    toast.add({ severity: "success", summary: "Success", detail: "Logged in successfully" });
    userStore.getUserData();
    router.push("/");
  }
  if(pending){
    toast.add({ severity: "info", summary: "Info", detail: "Logging in..." });
  }
});

const signInUser = () => {
  console.log("Signing in at the page level with: ", form.email, form.password);
  signInOrUp( { mode: 0, email: form.email, password: form.password });
};

</script>

<style scoped></style>
