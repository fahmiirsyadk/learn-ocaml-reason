let rec find z list =
  match list with
  | [] -> false
  | head :: tail -> if z = head then true else find z tail

let intersection x y = Belt.List.keep x (fun res -> find res y)

let intersectionArr x y =
  Belt.Array.keep x (fun res -> Array.to_list y |> find res)

let () =
  intersection [ 1; 2; 3; 4; 5; 6; 7; 8 ] [ 2; 3; 7; 8 ] |> Js.log;
  intersectionArr [| 1; 2; 3; 4; 5; 6; 7; 8 |] [| 2; 3; 7; 8 |] |> Js.log
