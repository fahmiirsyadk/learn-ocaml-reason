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

let uppercase_concat = (~sep="", a, b) =>
  concat(~sep, String.uppercase_ascii(a), b);

let () = concat("hello", "world") |> Js.log;
concat(~sep="~~", "hello", "world") |> Js.log;
uppercase_concat("hello", "world") |> Js.log;
uppercase_concat("hello", "world", ~sep=":") |> Js.log;
