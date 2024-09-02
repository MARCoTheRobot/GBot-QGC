<template>
  <div class="v-checkbox" @click="$emit('update:modelValue', !modelValue)">
    <component
      :is="modelValue ? 'CheckBoxIcon' : 'CheckBoxOutlineIcon'"
      :size="size"
    />
    <span v-if="label" class="checkbox-label">{{ label }}</span>
  </div>
</template>

<script>
import CheckBoxIcon from "@/krata/components/icons/CheckBoxIcon.vue";
import CheckBoxOutlineIcon from "@/krata/components/icons/CheckBoxOutlineIcon.vue";

export default {
  components: {
    CheckBoxIcon,
    CheckBoxOutlineIcon,
  },
  props: {
    modelValue: {
      type: Boolean,
      default: false,
    },
    label: {
      type: String,
      default: "",
    },
    size: {
      type: [String, Number],
      default: "18",
    },
  },
  emits: {
      'update:modelValue': {
          type: Boolean
      }
  },
};
</script>

<style lang="scss" scoped>
.v-checkbox {
  display: flex;
  flex-direction: row;
  align-items: center;

  .checkbox-label {
    margin-left: 5px;
  }

  &:hover {
    cursor: pointer;
  }
}
</style>
