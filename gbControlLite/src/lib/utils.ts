import { ClassValue } from "clsx";
import { clsx } from "clsx";
import { twMerge } from "tailwind-merge";

export function toUrl(data: (string | undefined)[], search?: string) {
  let url = "/" + data.filter((item) => item !== undefined).join("/");
  if (search) {
    url += `?${search}`;
  }
  return url;
}

export function cn(...inputs: ClassValue[]) {
  return twMerge(clsx(inputs));
}

export const generateSeed = (str: string, range?: number): number => {
  const seed = [...str].reduce((acc, char) => acc + char.charCodeAt(0), 0);
  return seed % (range || 15);
};
