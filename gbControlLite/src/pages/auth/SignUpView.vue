<template>
  <div class="h-56 bg-primary-400">
    <span />
  </div>
  <div class="container max-w-md px-4 py-20 mx-auto">
    <img :src="logo" alt="logo" class="w-full mx-auto mb-6 max-w-56">
    <h3 class="mb-4 text-3xl font-semibold text-center">{{ t(`util.welcome`) }}!</h3>
    <div class="mb-3">
      <label for="name" class="block mb-1 text-sm font-medium text-surface-600">{{ t(`util.name`) }}</label>
      <InputText v-model="form.name" class="w-full" placeholder="Name" type="name" :invalid="v$.name.$error" @blur="v$.name.$touch()" />
      <small v-if="v$.name.$error" class="text-red-500">{{ v$.name.$errors[0].$message }}</small>
    </div>
    <div class="mb-3">
      <label for="email" class="block mb-1 text-sm font-medium text-surface-600">Email</label>
      <InputText v-model="form.email" class="w-full" placeholder="Email" type="email" :invalid="v$.email.$error" @blur="v$.email.$touch()" />
      <small v-if="v$.email.$error" class="text-red-500">{{ v$.email.$errors[0].$message }}</small>
    </div>
    <div class="mb-3">
      <label for="email" class="block mb-1 text-sm font-medium text-surface-600">{{ t(`util.name`) }}</label>
      <Password
        v-model="form.password"
        class="w-full"
        :feedback="false"
        toggle-mask
        placeholder="Password"
        type="password"
        :invalid="v$.password.$error"
        @blur="v$.password.$touch()"
      />
      <small v-if="v$.password.$error" class="text-red-500">{{ v$.password.$errors[0].$message }}</small>
    </div>
    <div class="mb-6">
      <label for="email" class="block mb-1 text-sm font-medium text-surface-600">{{ `${t(`util.confirm`)} ${t(`util.password`)}` }}</label>
      <Password
        v-model="form.confirmPassword"
        class="w-full"
        :feedback="false"
        toggle-mask
        placeholder="Confirm Password"
        type="password"
        :invalid="v$.confirmPassword.$error"
        @blur="v$.confirmPassword.$touch()"
      />
      <small v-if="v$.confirmPassword.$error" class="text-red-500">{{ v$.confirmPassword.$errors[0].$message }}</small>
    </div>
    <Button :label="t(`signInUp.signUp`).toLocaleUpperCase()" class="w-full" rounded @click="$router.push('/onboarding')" />
    <div class="relative my-8">
      <span class="absolute px-4 font-semibold -translate-x-1/2 -translate-y-1/2 bg-white text-surface-500 top-1/2 left-1/2">{{ t(`util.or`).toLocaleUpperCase() }}</span>
      <div class="border-t-2 border-surface-300" />
    </div>

    <div class="flex items-center justify-center gap-8 mb-6">
      <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="google" alt="google">
      </button>
      <!-- <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="facebook" alt="facebook" class="size-7" />
      </button> -->
      <button class="flex items-center justify-center border rounded-full shadow-sm size-14 border-surface-200">
        <img :src="apple" alt="apple" class="size-8">
      </button>
    </div>

    <p class="mb-4 font-medium text-center text-surface-600">{{ t(`signInUp.alreadyAccount`) }}<router-link to="/login" class="underline text-primary-600">{{ t(`signInUp.signIn`) }}</router-link></p>
    <p class="mx-auto font-medium text-center text-surface-600 max-w-80">
      <a href="" class="underline text-primary-600">{{ t(`util.termsAndConditions`) }}</a> {{ t(`util.and`) }} <a href="" class="underline text-primary-600">{{ t(`util.privacyPolicy`) }}</a>.
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
import { reactive, watch } from "vue";
import { email, minLength, required, sameAs } from "@vuelidate/validators";
import useVuelidate from "@vuelidate/core";
import { useToast } from "primevue/usetoast";
import { useAuthenticateUser } from "@/hooks/firebase";
import { useRoute, useRouter } from "vue-router";
import useUserStore from "@/store/user";
import { rawUserData } from "@/data/disposable/raw-usr-data";
import { useI18n } from "vue-i18n";
const { t } = useI18n();

const toast = useToast();
const router = useRouter();
const userStore = useUserStore();
const route = useRoute();

const form = reactive({
  name: "",
  email: "",
  password: "",
  confirmPassword: "",
});
const rules = {
  name: { required },
  email: { required, email },
  password: { required, minLength: minLength(8) },
  confirmPassword: { required, sameAs: sameAs(form.password) },
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

const signUpUser = () => {
  console.log("Signing in at the page level with: ", form.email, form.password);
  // signInOrUp( { mode: 1, email: form.email, password: form.password });
  userStore.rawUsrData = rawUserData;
};


</script>

<style scoped></style>
