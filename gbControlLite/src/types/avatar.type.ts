export interface AvatarType {
  body: AvatarItemType;
  head: AvatarItemType;
  eye: AvatarItemType;
  skinTone: AvatarItemType;
  hairColor: AvatarItemType;
  irisColor: AvatarItemType;
}

export interface AvatarItemType {
  name: string;
  type: "svg" | "color";
}

export interface AvatarOptionsType {
  avatar: {
    name: string;
    voice: string;
    src: string;
    audioSample: string;
  }[];
  options: {
    name: string;
    src: string;
    key: keyof AvatarOptionsType;
  }[];
  body: {
    label: string;
    value: string;
  }[];
  head: {
    label: string;
    value: string;
  }[];
  eye: {
    label: string;
    value: string;
  }[];
  skinTone: string[];
  voice: {
    label: string;
    value: string;
    audioSample: string;
  }[];
}
