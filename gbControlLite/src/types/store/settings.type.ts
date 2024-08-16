import { AvatarType, AvatarOptionsType } from "../avatar.type";
import { I18nLangType } from "../lang.type";

export interface SettingsType {
  user: { lang: I18nLangType; firstTime: boolean };
  app: { theme: "dark" | "light" | "system" };
  avatar: any;
  transcript: {show: boolean; messages: any[]};
  version: number;
}
