let union x y = List.append x y

let unionArr x y = Js_array.concat x y

let () =
  union [ 0; 1; 2; 3 ] [ 3; 4; 5 ] |> Js.log;
  unionArr [| 0; 1; 2; 3 |] [| 3; 4; 5 |] |> Js.log
