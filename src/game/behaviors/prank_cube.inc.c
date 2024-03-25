void bhv_prank_cube_init(void) {
   
}

void bhv_prank_cube_loop(void) {
   
}

void bhv_mario_prank_loop(void) {
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    if (o->oTimer > 89 && o->oTimer <= 130 ) {
        o->oPosZ -= 90 * sins(0x666 * (o->oTimer - 90));
        o->oPosX -= 50 * coss(0x666 * (o->oTimer - 90));

        o->oPosY += 8 * sins(0x666 * (o->oTimer - 90));

        o->oFaceAngleYaw = -0x666 * (o->oTimer - 90);
    }

    
}