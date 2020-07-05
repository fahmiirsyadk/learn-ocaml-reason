let rec is_even = x => x === 0 ? true : is_odd(x - 1)
and is_odd = x => x === 0 ? false : is_even(x - 1);

let () = Belt_List.map([1, 2, 3, 4, 5], is_even) |> Js.log;
Belt_List.map([1, 2, 3, 4, 5], is_odd) |> Js.log;
