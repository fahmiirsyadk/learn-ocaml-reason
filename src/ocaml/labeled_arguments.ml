let ratio ~num ~denom = 
  Belt_Float.fromInt num /. Belt_Float.fromInt denom

let () = 
  let num = 3 in
  let denom = 4 in
  ratio ~num ~denom |> Js.log