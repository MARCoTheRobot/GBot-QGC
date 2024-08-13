// import { EntryBase } from "@/libs/constants";
import http from "@/lib/http";
import { toUrl } from "@/lib/utils";
import { WishListInfo, WishlistDTO } from "@/types/api/wishlist.type";
import { AppError } from "@/types/index.type";
import { UseMutationReturnType, UseQueryReturnType, useMutation, useQuery, useQueryClient } from "@tanstack/vue-query";
import { useToast } from "primevue/usetoast";

// Endpoint: [GET] /getFeedbackList
export const useGetWishlist = (): UseQueryReturnType<WishListInfo[], Error> => {
  const key = ["getFeedbackList"];
  return useQuery({ queryKey: key, queryFn: () => http({ url: toUrl(key) }) });
};

// Endpoint: [POST] /addFeedbackEntry
export const useAddWishlist = (): UseMutationReturnType<WishListInfo, AppError, WishlistDTO, any> => {
  const queryClient = useQueryClient();
  const toast = useToast();
  return useMutation({
    mutationFn: (data) => http({ url: toUrl(["addFeedbackEntry"]), method: "POST", data: data }),
    onMutate: () => toast.add({ severity: "info", summary: "Adding...", life: 2000 }),
    onSuccess() {
      toast.add({ severity: "success", summary: "Added Successful", life: 2000 });
      queryClient.invalidateQueries({ queryKey: ["getFeedbackList"] });
    },
    onError: (error) => toast.add({ severity: "success", summary: error.message, life: 2000 }),
  });
};

// TODO: This endpoint need to modify
// Endpoint: [POST] /updateFeedbackEntry
export const useAddComment = (): UseMutationReturnType<WishListInfo, AppError, WishlistDTO, any> => {
  const queryClient = useQueryClient();
  const toast = useToast();
  return useMutation({
    mutationFn: (data) => http({ url: toUrl(["updateFeedbackEntry"]), method: "POST", data: data }),
    onMutate: () => toast.add({ severity: "info", summary: "Adding...", life: 2000 }),
    onSuccess() {
      toast.add({ severity: "success", summary: "Added Successful", life: 2000 });
      queryClient.invalidateQueries({ queryKey: ["getFeedbackList"] });
    },
    onError: (error) => toast.add({ severity: "success", summary: error.message, life: 2000 }),
  });
};
