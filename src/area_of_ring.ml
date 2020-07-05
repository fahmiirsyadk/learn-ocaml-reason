external pi : float = "Math.PI" [@@bs.val]

let area_of_ring inner_radius outer_radius = 
  (fun x y -> (fun z -> z x -. z y))
    outer_radius inner_radius (fun r -> pi *. r *. r)

let () = 
  area_of_ring 1. 3. |> Js.log2 "Hasilnya adalah:"