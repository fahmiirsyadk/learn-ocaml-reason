let rec find_first_duplicate list =
  match list with
  | [] | [_] ->
  (* only zero or one element, so no repeat *)
  None
  | x :: y :: tl ->
    if x = y then Some x else find_first_duplicate (y::tl)

let print_find data = 
  match find_first_duplicate (data) with
    | Some x -> Js.log2 "Data repeat pertama adalah" x
    | None -> Js.log "Tidak ada data yang repeat"

let () = print_find [1;23;45;2;2;4;5]