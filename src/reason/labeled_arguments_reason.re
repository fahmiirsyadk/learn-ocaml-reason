let ratio = (~num, ~denom) =>
  Belt_Float.fromInt(num) /. Belt_Float.fromInt(denom);

let () = {
  let num = 3;
  let denom = 4;
  ratio(~num, ~denom) |> Js.log;
};
