export interface WishListInfo {
  id: string;
  fields: {
    Subject?: string;
    "Feedback session"?: string[];
    Type: string;
    Description?: string;
    "Demo Video"?: string;
    Pictures?: {
      id: string;
      width: number;
      height: number;
      url: string;
      filename: string;
      size: number;
      type: string;
      thumbnails: {
        small: Small;
        large: Large;
        full: Full;
      };
    }[];
    Tags?: string[];
    Status?: string;
    Upvotes: string[];
    Platforms?: string;
    Public: boolean;
    Discussion?: {
      initials: string;
      comment: string;
    }[];
    show: boolean;
    Downvotes: any[];
    "Submitted by"?: string;
  };
}

interface Small {
  url: string;
  width: number;
  height: number;
}

interface Large {
  url: string;
  width: number;
  height: number;
}

interface Full {
  url: string;
  width: number;
  height: number;
}

export interface WishlistDTO {
  fields: {
    Subject?: string;
    "Feedback session"?: string[];
    Type: string;
    Description?: string;
    Platforms?: string;
    Public: boolean;
    Upvotes: string[];
    Tags: string[];
    Status: string;
    show: boolean;
    Downvotes: any[];
    "Submitted by"?: string;
    "Demo Video"?: string;
  };
}
