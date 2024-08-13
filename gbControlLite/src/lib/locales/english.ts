import { and } from "firebase/firestore";
import { get } from "http";
import { describe } from "node:test";


const english = {
  initialScreen: [
    {
      title: "Welcome to MARCo!",
      description: "Your friend, coach, counselor, advocate.",
    },
    {
      title: "How will you use MARCo today?",
      description: "App only or connect to the robot?",
    },
    {
      title: "Searching for MARCos...",
      description: "Please make sure that the robot is on and is near the device.",
      skipMessage: "Are you sure you want to skip?",
    },
    {
      title: "Ready to start!",
      description: "You are ready to start with your friend, coach, counselor,",
    },
  ],
  journalPage: {
    title: "Journals",
    description: "Write down your thoughts and feelings.",
    action: "START JOURNALING",
    read: "READ",
  },
  homePage: {
    remoteOptions: {
      robotOnly: {
        description: "Tap to chat with your robot",
      },
      appOnly: {
        title: "App",
        description: "Talk to MARCo on this device",
      },
      new: {
        title: "New",
        description: "Add or update a MARCo",
      },
    },
  },
  signInUp:{
    signIn: "Sign In",
    signUp: "Sign Up",
    alreadyAccount: "Already have an account?",
  },
  activityPage: {
    dailyGoalProgressTitles: ["Just getting started", "Off to a good start", "Keep it up!", "AMAZING!"],
    dailyGoalprogressDesc: "You are {progress}% towards your daily goal. Keep it up!",
    badgesAndGoals: {
      title: "Badges & Goals",
    },
    dailyGoals: {
      title: "Today's Goals",
      descriptor: "Press start to do an activity, or press and hold to select multiple for daily goals.",
    },
    categories: [
      {
        title: "New",
        description: "The latest and greatest from MARCo.",
      },
      {
        title: "Fun & Games",
        description: "Smile, laugh, and have a blast!",
      },
      {
        title: "Meditation & Relaxation",
        description: "Find your zen.",
      },
      {
        title: "Talk Support",
        description: "Build up your mental strength",
      },
    ],
  },
  networkSetup: {
    searchingNearby: "Searching nearby...",
    connectedMessage: "Great! Your MARCo is connected!",
    couldNotFind:"Could not find your MARCo. Please make sure your MARCo is powered on, and if it is, scan for it locally using the button below.",
    connectToPrevious: "Connect to previous MARCo",
    addNewMARCo: "Add New or Update Wifi",
  },
  util: {
    seeAll: "See All",
    cancel: "Cancel",
    save: "Save",
    delete: "Delete",
    done: "Done",
    activities: "Activities",
    minutes: "Minutes",
    days: "Days",
    hours: "Hours",
    seconds: "Seconds",
    today: "Today",
    weeks: "Weeks",
    start: "Start",
    add: "Add",
    stop: "Stop",
    skip: "Skip",
    confirm: "Confirm",
    accept: "Accept",
    yes: "Yes",
    no: "No",
    continue: "Continue",
    getStarted: "Get Started",
    select: "Select",
    robot: "Robot",
    app: "App",
    next: "Next",
    wifi: "WiFi",
    none: "None",
    connect: "Connect",
    disconnect: "Disconnect",
    loading: "Loading",
    error: "Error",
    retry: "Retry",
    troubleshoot: "Troubleshoot",
    listening: "Listening",
    nickname: "Nickname",
    scan: "Scan",
    rescan: "Rescan",
    or: "Or",
    password: "Password",
    email: "Email",
    username: "Username",
    welcome: "Welcome",
    name: "Name",
    termsAndConditions: "Terms and Conditions",
    privacyPolicy: "Privacy Policy",
    and: "and",

  },
};

export default english;
