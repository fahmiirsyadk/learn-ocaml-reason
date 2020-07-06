let (+!) (x1,y1) (x2,y2) = (x1 + x2, y1 + y2)
let () = (3,2) +! (-2,4) |> Js.log