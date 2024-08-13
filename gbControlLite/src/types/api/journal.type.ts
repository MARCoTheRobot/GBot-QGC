export interface RawJournalPrompts {
  Name: string;
  Description: string;
  "Prompt 1"?: string;
  "Prompt 2"?: string;
  "Prompt 3"?: string;
  "Prompt 4"?: string;
  "Prompt 5"?: string;
  "Prompt 6"?: string;
  "Prompt 7"?: string;
  "Prompt 8"?: string;
  "Prompt 9"?: string;
  "Prompt 10"?: string;
}

export interface JournalsPrompts {
  title: string;
  subtitle: string;
  prompts: string[];
  recommended?: boolean;
}

export interface JournalEntries {}
