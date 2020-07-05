let concat ?sep x y =
  (fun x y -> fun (z) -> match z with None -> x ^ y | Some z -> x ^ z ^ y) x y sep

let () = 
  concat "hello" "world" |> Js.log;
  concat ~sep:"--" "hello" "world" |> Js.log