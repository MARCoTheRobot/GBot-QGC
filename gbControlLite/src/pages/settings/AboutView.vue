<template>
  <div class="relative flex flex-col h-full px-4 py-6">
    <div class="flex-1">
      <Button severity="secondary" class="!p-0 !absolute top-7 left-4" text rounded @click="$router.back()">
        <IconChevronLeft class="text-surface-500" stroke="2" size="30" />
      </Button>
      <h1 class="text-3xl font-semibold text-center">Linked Accounts</h1>

      <IconInfoSquareRounded stroke="2" size="100" class="mx-auto my-8 text-primary-600" />

      <div class="mb-8">
        <p class="mb-1 text-lg font-semibold">App Version</p>
        <p class="text-surface-500">2.7.0</p>
      </div>
      <div class="mb-8">
        <p class="mb-1 text-lg font-semibold">Legal</p>
        <p class="text-surface-500">© MARCo Health Inc. 2023</p>
      </div>

      <div class="mb-8">
        <p class="mb-1 text-lg font-semibold">Safety and Efficacy</p>
        <p class="mb-2">
          It is our committment to providing a safe and helpful experience with MARCo. To this end, we strive to be transparent about the sources of the advice that MARCo provides.
          Below, you may find a list of the clinical resources used in the development of MARCo's mental health assisting methodology and advice:
        </p>
        <ul class="pl-8 space-y-2 list-disc">
          <li>
            Recommendations for the CSSRS and any high-risk decisions come from the Lighthouse Project of Columbia University and the American Foundation for Suicide Prevention.
            <a class="font-semibold text-primary-600" href="#">Learn more here</a>
          </li>
          <li>
            Talk Support activities derived from "A Therapist's Guide to Brief Cognitive Behaivoral Therapy" by Jeffrey A. Cully, Ph.D and Andra L. Teten, Ph.D
            <a class="font-semibold text-primary-600" href="#">Learn more here</a>
          </li>
          <li>
            Additional Talk Support advice and stress relief advice is derived from Queen's University "Your Best You, Managing Your Anxiety" developed by Mary Acreman, PhD; Jenn
            Bossio, PhD; Carole-Ann Vatcher, MSW, RSW; Freeman Woolnough, MEd, CCC <a class="font-semibold text-primary-600" href="#">Learn more here</a>
          </li>
          <li>
            MARCo is not a medical device. The advice, exercises, activities, and information that MARCo provides is not intended to diagnose, cure, prevent, or mitigate any
            illnesses. Before making any medical decisions, consult a doctor or licensed professional. MARCo should be used in conjunction with a healthy lifestyle and regular
            treatment if applicable.
          </li>
          <li>
            If you have any questions, comments, or concerns regarding the safety, efficacy, or methodology of MARCo, you may contact our safety officer at:
            <a class="font-semibold text-primary-600" href="mailto:safety@marcohealthtech.com">safety@marcohealthtech.com</a>
          </li>
        </ul>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { IconChevronLeft, IconInfoSquareRounded } from "@tabler/icons-vue";
import Button from "primevue/button";
</script>

<style scoped></style>
