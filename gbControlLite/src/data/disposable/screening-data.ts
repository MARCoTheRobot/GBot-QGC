export const screeningData = {
  details: {
    title: ["GAD-7"],
    description: ["The GAD-7 is intended to get a measure of  the prevalence, frequency, and severity of symptoms associated with Generalized Anxiety Disorder (GAD)."],
    completionTime: 3,
    id: "eb61e871-7d54-48ad-bfda-c96f94ebb4df",
  },
  questions: [
    {
      questionText: "In the past two weeks, how often have you felt nervous, anxious, or on edge?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: 2,
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you felt unable to stop or control your worrying?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you felt yourself worrying too much about different things?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you had trouble relaxing?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you felt so restless that it is hard to sit still?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you felt yourself become easily annoyed or irritable?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
    {
      questionText: "In the past two weeks, how often have you felt afraid, as if something awful might happen?",
      highRiskMin: 99,
      descriptionRules: {
        minOptional: "0",
        maxOptional: 100000,
        minRequired: 99,
        maxRequired: 99,
      },
      answerChoices: ["Not at all", "Several Days", "More than half the days", "Nearly every day"],
      questionType: "Single Selection",
    },
  ],
};
