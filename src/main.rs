#![no_std] //don't link the Rust standard library
#![no_main] //disable all Rust-level entry points
use x86_64::instructions::hlt;

#[panic_handler]
fn panic(_info: &core::panic::PanicInfo) -> ! { //panic macro unwinds the call stack (cleans it)
    loop {hlt();}
}

static HELLO: &[u8] = b"Hello People! This is just a quick illustration for OS.";

#[unsafe(no_mangle)] 
pub extern "C" fn _start() -> ! { //this is the entry point, since the linker looks for a function '_start' by default
    let framebuffer = 0xb8000 as *mut u8;
    /*unsafe{
        framebuffer.onset(1).write_volatile(0x30);
    }*/
    for (i, &byte) in HELLO.iter().enumerate() {
        unsafe {
            *framebuffer.offset(i as isize *2) = byte;
            *framebuffer.offset(i as isize *2 + 1) = 0xb;
        }
    }
    loop {hlt();}
}


 //the '!' means that the function would never return