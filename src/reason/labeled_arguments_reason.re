let ratio = (~num, ~denom) =>
  Belt_Float.fromInt(num) /. Belt_Float.fromInt(denom);
let () = ratio(~num=3, ~denom=4) |> Js.log;
