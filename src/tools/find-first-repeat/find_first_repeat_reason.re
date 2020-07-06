let rec find_first_duplicate = list =>
  switch (list) {
  | []
  | [_] => None /* only zero or one element, so no repeat */
  | [x, y, ...tl] =>
    if (x == y) {
      Some(x);
    } else {
      find_first_duplicate([y, ...tl]);
    }
  };

let print_find = data =>
  switch (find_first_duplicate(data)) {
  | Some(x) => Js.log2("Data repeat pertama adalah", x)
  | None => Js.log("Tidak ada data yang repeat")
  };

let () = print_find([1, 23, 45, 2, 2, 4, 5]);
