let union = (x: list('a), y: list('a)) => Belt_List.concat(x, y);

let unionArr = (x: array('a), y: array('a)) => Belt_Array.concat(x, y);

let () = union([0, 1, 2, 3], [3, 4, 5]) |> Js.log;
unionArr([|0, 1, 2, 3|], [|3, 4, 5|]) |> Js.log;
