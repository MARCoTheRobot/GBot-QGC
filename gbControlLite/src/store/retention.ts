import { defineStore } from "pinia";
import { ref, reactive, watch, computed } from "vue";
import { onboardingLessons } from "@/data/onboarding-lessons";

const useRetentionStore = defineStore("retention", () => {
  const onboardingLessonArray = ref(onboardingLessons);
  const weekNumber = ref(1);

  const scheduleNotifications = () => {
    const lessonArray = getLessonArray(new Date());
    lessonArray.forEach((lesson, index) => {
      const notificationDate = calculateNotificationDate(index + 1);
      this.notificationHandler.scheduleNotification(notificationDate, `Coaching Lesson ${index + 1}`);
    });
  };

  const unlockLessonsUntilWeek = computed(() => {
    const output = {
      active: false,
      lessons: [],
    };
    for (let i = 0; i < onboardingLessonArray.value.length; i++) {
      const lesson = onboardingLessonArray.value[i];
      if (lesson.week < weekNumber.value) {
        lesson.locked = false;
        output.lessons.push(lesson);
      } else if (lesson.week === weekNumber.value) {
        lesson.locked = false;
        output.active = lesson;
      } else {
        lesson.locked = true;
        output.lessons.push(lesson);
      }
    }
    return output;
  });

  const calculateWeekNumber = (date) => {
    const currentDate = new Date();
    const weekDifference = Math.floor((currentDate - date) / (1000 * 60 * 60 * 24 * 7));
    weekNumber.value = weekDifference + 1;
    return weekDifference + 1;
  };

  const calculateNotificationDate = (lessonIndex) => {
    // Calculate the notification date based on the lesson index
    // Implement your own logic here
  };

  return { onboardingLessonArray, weekNumber, scheduleNotifications, unlockLessonsUntilWeek, calculateWeekNumber, calculateNotificationDate };
});

export default useRetentionStore;
