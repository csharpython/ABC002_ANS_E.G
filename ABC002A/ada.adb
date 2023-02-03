-- atcoder.jp/contests/abc002/submissions/33725086
with Ada.Text_IO;
use Ada.Text_IO;
with Ada.Integer_Text_IO;
use Ada.Integer_Text_IO;

procedure Main is
   A: Integer;
   B: Integer;
begin
   Get(A);
   Get(B);
   if A < B then
      Put(B,0);New_Line;
   else
      Put(A,0);New_Line;
   end if;
end Main;