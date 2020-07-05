let concat = (~sep=?, x, y) =>
  (
    (x, y, z) =>
      switch (z) {
      | None => x ++ y
      | Some(z) => x ++ z ++ y
      }
  )(
    x,
    y,
    sep,
  );

let () = concat("hello", "world") |> Js.log;
concat(~sep="~~", "hello", "world") |> Js.log;
