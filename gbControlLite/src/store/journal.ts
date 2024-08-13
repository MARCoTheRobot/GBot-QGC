import { set } from "firebase/database";
import { defineStore } from "pinia";
import { reactive, watch } from "vue";

const useJournalStore = defineStore("journal", {
  state: () => {
    return {
      journalPrompts: [],
      previousJournals: [],
      journalEntry: "",
      journals: [],
    };
  },
  getters: {
    getJournalPrompts() {
      return this.journalPrompts;
    },
    getPreviousJournals() {
      return this.previousJournals;
    },
    getJournalEntry() {
      return this.journalEntry;
    },
  },
  actions: {
    setJournalPrompts(journalPrompts: any) {
      this.journalPrompts = journalPrompts;
    },
    setPreviousJournals(previousJournals: any) {
      this.previousJournals = previousJournals;
    },
    setJournalEntry(journalEntry: string) {
      this.journalEntry = journalEntry;
      console.log(this.journalEntry);
    },
    setJournals(journals: any) {
      this.journals = journals;
    },
  },
});

export default useJournalStore;
