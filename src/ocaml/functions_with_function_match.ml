let some_or_zero = function
  | Some x -> x
  | None -> 0

let () = List.map some_or_zero [Some 3; None; Some 4; None] |> Js.log;