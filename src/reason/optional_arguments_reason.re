let concat = (~sep=?, x, y) => {
  switch (sep) {
  | None => x ++ y
  | Some(z) => x ++ z ++ y
  };
};

let uppercase_concat = (~sep=?, a, b) =>
  concat(String.uppercase_ascii(a), b, ~sep?);

let () = concat("hello", "world") |> Js.log;
concat(~sep="~~", "hello", "world") |> Js.log;
uppercase_concat("hello", "world") |> Js.log;
uppercase_concat("hello", "world", ~sep=":") |> Js.log;
