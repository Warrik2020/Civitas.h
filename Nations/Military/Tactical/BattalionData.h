#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattalionData : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattalionData(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattalionData") {}
    public:
        void* anchor() const { return ReadField<void*>("anchor"); }
        void anchor(void* value) const { WriteField<void*>("anchor", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void centre(void* value) const { WriteField<void*>("centre", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        float turnVel() const { return ReadField<float>("turnVel"); }
        void turnVel(float value) const { WriteField<float>("turnVel", value); }
        void* moveTarget() const { return ReadField<void*>("moveTarget"); }
        void moveTarget(void* value) const { WriteField<void*>("moveTarget", value); }
        void* faceOrder() const { return ReadField<void*>("faceOrder"); }
        void faceOrder(void* value) const { WriteField<void*>("faceOrder", value); }
        void* routDir() const { return ReadField<void*>("routDir"); }
        void routDir(void* value) const { WriteField<void*>("routDir", value); }
        void* fleeDir() const { return ReadField<void*>("fleeDir"); }
        void fleeDir(void* value) const { WriteField<void*>("fleeDir", value); }
        int menStart() const { return ReadField<int>("menStart"); }
        void menStart(int value) const { WriteField<int>("menStart", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void menCount(int value) const { WriteField<int>("menCount", value); }
        int alive() const { return ReadField<int>("alive"); }
        void alive(int value) const { WriteField<int>("alive", value); }
        int side() const { return ReadField<int>("side"); }
        void side(int value) const { WriteField<int>("side", value); }
        int division() const { return ReadField<int>("division"); }
        void division(int value) const { WriteField<int>("division", value); }
        int fireTarget() const { return ReadField<int>("fireTarget"); }
        void fireTarget(int value) const { WriteField<int>("fireTarget", value); }
        int meleeTarget() const { return ReadField<int>("meleeTarget"); }
        void meleeTarget(int value) const { WriteField<int>("meleeTarget", value); }
        int wallTarget() const { return ReadField<int>("wallTarget"); }
        void wallTarget(int value) const { WriteField<int>("wallTarget", value); }
        int deathsThisStep() const { return ReadField<int>("deathsThisStep"); }
        void deathsThisStep(int value) const { WriteField<int>("deathsThisStep", value); }
        int files() const { return ReadField<int>("files"); }
        void files(int value) const { WriteField<int>("files", value); }
        int ranks() const { return ReadField<int>("ranks"); }
        void ranks(int value) const { WriteField<int>("ranks", value); }
        float spacing() const { return ReadField<float>("spacing"); }
        void spacing(float value) const { WriteField<float>("spacing", value); }
        float rankSpacing() const { return ReadField<float>("rankSpacing"); }
        void rankSpacing(float value) const { WriteField<float>("rankSpacing", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void halfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float depth() const { return ReadField<float>("depth"); }
        void depth(float value) const { WriteField<float>("depth", value); }
        float drawHalfWidth() const { return ReadField<float>("drawHalfWidth"); }
        void drawHalfWidth(float value) const { WriteField<float>("drawHalfWidth", value); }
        float drawDepth() const { return ReadField<float>("drawDepth"); }
        void drawDepth(float value) const { WriteField<float>("drawDepth", value); }
        float cohesion() const { return ReadField<float>("cohesion"); }
        void cohesion(float value) const { WriteField<float>("cohesion", value); }
        float speed() const { return ReadField<float>("speed"); }
        void speed(float value) const { WriteField<float>("speed", value); }
        float pace() const { return ReadField<float>("pace"); }
        void pace(float value) const { WriteField<float>("pace", value); }
        void* marchDir() const { return ReadField<void*>("marchDir"); }
        void marchDir(void* value) const { WriteField<void*>("marchDir", value); }
        float drillT() const { return ReadField<float>("drillT"); }
        void drillT(float value) const { WriteField<float>("drillT", value); }
        float weaponRange() const { return ReadField<float>("weaponRange"); }
        void weaponRange(float value) const { WriteField<float>("weaponRange", value); }
        float reload() const { return ReadField<float>("reload"); }
        void reload(float value) const { WriteField<float>("reload", value); }
        float hitBase() const { return ReadField<float>("hitBase"); }
        void hitBase(float value) const { WriteField<float>("hitBase", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void meleeHit(float value) const { WriteField<float>("meleeHit", value); }
        float meleeArmourMul() const { return ReadField<float>("meleeArmourMul"); }
        void meleeArmourMul(float value) const { WriteField<float>("meleeArmourMul", value); }
        float hitMul() const { return ReadField<float>("hitMul"); }
        void hitMul(float value) const { WriteField<float>("hitMul", value); }
        float incomingMul() const { return ReadField<float>("incomingMul"); }
        void incomingMul(float value) const { WriteField<float>("incomingMul", value); }
        float exposureMul() const { return ReadField<float>("exposureMul"); }
        void exposureMul(float value) const { WriteField<float>("exposureMul", value); }
        float height() const { return ReadField<float>("height"); }
        void height(float value) const { WriteField<float>("height", value); }
        float morale() const { return ReadField<float>("morale"); }
        void morale(float value) const { WriteField<float>("morale", value); }
        float chargeBonus() const { return ReadField<float>("chargeBonus"); }
        void chargeBonus(float value) const { WriteField<float>("chargeBonus", value); }
        float suppress() const { return ReadField<float>("suppress"); }
        void suppress(float value) const { WriteField<float>("suppress", value); }
        uint8_t arm() const { return ReadField<uint8_t>("arm"); }
        void arm(uint8_t value) const { WriteField<uint8_t>("arm", value); }
        uint8_t formation() const { return ReadField<uint8_t>("formation"); }
        void formation(uint8_t value) const { WriteField<uint8_t>("formation", value); }
        uint8_t state() const { return ReadField<uint8_t>("state"); }
        void state(uint8_t value) const { WriteField<uint8_t>("state", value); }
        uint8_t run() const { return ReadField<uint8_t>("run"); }
        void run(uint8_t value) const { WriteField<uint8_t>("run", value); }
        uint8_t holdFire() const { return ReadField<uint8_t>("holdFire"); }
        void holdFire(uint8_t value) const { WriteField<uint8_t>("holdFire", value); }
        uint8_t volley() const { return ReadField<uint8_t>("volley"); }
        void volley(uint8_t value) const { WriteField<uint8_t>("volley", value); }
        uint8_t meleeContact() const { return ReadField<uint8_t>("meleeContact"); }
        void meleeContact(uint8_t value) const { WriteField<uint8_t>("meleeContact", value); }
        uint8_t digIn() const { return ReadField<uint8_t>("digIn"); }
        void digIn(uint8_t value) const { WriteField<uint8_t>("digIn", value); }
        uint8_t era() const { return ReadField<uint8_t>("era"); }
        void era(uint8_t value) const { WriteField<uint8_t>("era", value); }
        uint8_t moving() const { return ReadField<uint8_t>("moving"); }
        void moving(uint8_t value) const { WriteField<uint8_t>("moving", value); }
        uint8_t flanked() const { return ReadField<uint8_t>("flanked"); }
        void flanked(uint8_t value) const { WriteField<uint8_t>("flanked", value); }
        uint8_t age() const { return ReadField<uint8_t>("age"); }
        void age(uint8_t value) const { WriteField<uint8_t>("age", value); }
        uint8_t surround() const { return ReadField<uint8_t>("surround"); }
        void surround(uint8_t value) const { WriteField<uint8_t>("surround", value); }
        uint8_t pocketed() const { return ReadField<uint8_t>("pocketed"); }
        void pocketed(uint8_t value) const { WriteField<uint8_t>("pocketed", value); }
        uint8_t urban() const { return ReadField<uint8_t>("urban"); }
        void urban(uint8_t value) const { WriteField<uint8_t>("urban", value); }
        uint8_t garrisonFrac() const { return ReadField<uint8_t>("garrisonFrac"); }
        void garrisonFrac(uint8_t value) const { WriteField<uint8_t>("garrisonFrac", value); }
    };
}
