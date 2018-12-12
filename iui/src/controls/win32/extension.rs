//TODO: There is nothing useful here yet. Later I will try to restore some of the window movement features with the Windows API.

pub use ui::_RECT as Win32Rect;
use std::convert::From;

pub struct Rectangle
{
    pub left: i64,
    pub top: i64,
    pub right: i64,
    pub bottom: i64,
}

impl From<Win32Rect> for Rectangle {
    fn from(rect: Win32Rect) -> Self {
        Rectangle { rect.left, rect.top, rect.right, rect.bottom }
    }
}