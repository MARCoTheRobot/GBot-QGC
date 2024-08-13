import { I18nLangType, I18nMessageType } from "@/types/lang.type";
import { useI18n } from "vue-i18n";

export const useLang = () => {
  return useI18n<{ message: I18nMessageType }, I18nLangType>({ useScope: "global" });
};
