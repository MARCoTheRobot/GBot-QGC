<template>
  <div class="relative flex flex-col h-full px-4 py-6">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Linked Accounts</h1>

      <div class="flex items-center justify-center gap-2 my-8 text-surface-500">
        <IconBrandGoogle size="50" stroke="2" />
        <IconBrandFacebook size="50" stroke="2" />
        <IconBrandApple size="50" stroke="2" />
        <IconMail size="50" stroke="2" />
      </div>

      <div class="divide-y divide-surface-300 text-surface-700">
        <div class="flex items-center justify-between p-3 text-lg cursor-pointer hover:bg-surface-50">
          <span class="font-semibold">Google</span>
          <Button class="w-20" label="Add" size="small" severity="secondary" rounded />
        </div>
        <div class="flex items-center justify-between p-3 text-lg cursor-pointer hover:bg-surface-50">
          <span class="font-semibold">Facebook</span>
          <Button class="w-20" label="Add" size="small" severity="secondary" rounded />
        </div>
        <div class="flex items-center justify-between p-3 text-lg cursor-pointer hover:bg-surface-50">
          <span class="font-semibold">Apple</span>
          <Button class="w-20" label="Add" size="small" severity="secondary" rounded />
        </div>
        <div class="flex items-center justify-between p-3 text-lg cursor-pointer hover:bg-surface-50">
          <span class="font-semibold">Email & Password</span>
          <Button class="w-20 !p-0 h-[37px]" label="Add" size="small" rounded>
            <IconCheck class="text-white" stroke="2" size="24" />
          </Button>
        </div>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { IconBrandApple, IconBrandFacebook, IconBrandGoogle, IconCheck, IconChevronLeft, IconMail } from "@tabler/icons-vue";

import Button from "primevue/button";
</script>

<style scoped></style>
