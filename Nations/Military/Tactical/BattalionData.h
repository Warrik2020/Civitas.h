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
        void SetAnchor(void* value) const { WriteField<void*>("anchor", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void SetFacing(void* value) const { WriteField<void*>("facing", value); }
        float turnVel() const { return ReadField<float>("turnVel"); }
        void SetTurnVel(float value) const { WriteField<float>("turnVel", value); }
        void* moveTarget() const { return ReadField<void*>("moveTarget"); }
        void SetMoveTarget(void* value) const { WriteField<void*>("moveTarget", value); }
        void* faceOrder() const { return ReadField<void*>("faceOrder"); }
        void SetFaceOrder(void* value) const { WriteField<void*>("faceOrder", value); }
        void* routDir() const { return ReadField<void*>("routDir"); }
        void SetRoutDir(void* value) const { WriteField<void*>("routDir", value); }
        void* fleeDir() const { return ReadField<void*>("fleeDir"); }
        void SetFleeDir(void* value) const { WriteField<void*>("fleeDir", value); }
        int menStart() const { return ReadField<int>("menStart"); }
        void SetMenStart(int value) const { WriteField<int>("menStart", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void SetMenCount(int value) const { WriteField<int>("menCount", value); }
        int alive() const { return ReadField<int>("alive"); }
        void SetAlive(int value) const { WriteField<int>("alive", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int division() const { return ReadField<int>("division"); }
        void SetDivision(int value) const { WriteField<int>("division", value); }
        int fireTarget() const { return ReadField<int>("fireTarget"); }
        void SetFireTarget(int value) const { WriteField<int>("fireTarget", value); }
        int meleeTarget() const { return ReadField<int>("meleeTarget"); }
        void SetMeleeTarget(int value) const { WriteField<int>("meleeTarget", value); }
        int wallTarget() const { return ReadField<int>("wallTarget"); }
        void SetWallTarget(int value) const { WriteField<int>("wallTarget", value); }
        int deathsThisStep() const { return ReadField<int>("deathsThisStep"); }
        void SetDeathsThisStep(int value) const { WriteField<int>("deathsThisStep", value); }
        int files() const { return ReadField<int>("files"); }
        void SetFiles(int value) const { WriteField<int>("files", value); }
        int ranks() const { return ReadField<int>("ranks"); }
        void SetRanks(int value) const { WriteField<int>("ranks", value); }
        float spacing() const { return ReadField<float>("spacing"); }
        void SetSpacing(float value) const { WriteField<float>("spacing", value); }
        float rankSpacing() const { return ReadField<float>("rankSpacing"); }
        void SetRankSpacing(float value) const { WriteField<float>("rankSpacing", value); }
        float halfWidth() const { return ReadField<float>("halfWidth"); }
        void SetHalfWidth(float value) const { WriteField<float>("halfWidth", value); }
        float depth() const { return ReadField<float>("depth"); }
        void SetDepth(float value) const { WriteField<float>("depth", value); }
        float drawHalfWidth() const { return ReadField<float>("drawHalfWidth"); }
        void SetDrawHalfWidth(float value) const { WriteField<float>("drawHalfWidth", value); }
        float drawDepth() const { return ReadField<float>("drawDepth"); }
        void SetDrawDepth(float value) const { WriteField<float>("drawDepth", value); }
        float cohesion() const { return ReadField<float>("cohesion"); }
        void SetCohesion(float value) const { WriteField<float>("cohesion", value); }
        float speed() const { return ReadField<float>("speed"); }
        void SetSpeed(float value) const { WriteField<float>("speed", value); }
        float pace() const { return ReadField<float>("pace"); }
        void SetPace(float value) const { WriteField<float>("pace", value); }
        void* marchDir() const { return ReadField<void*>("marchDir"); }
        void SetMarchDir(void* value) const { WriteField<void*>("marchDir", value); }
        float drillT() const { return ReadField<float>("drillT"); }
        void SetDrillT(float value) const { WriteField<float>("drillT", value); }
        float weaponRange() const { return ReadField<float>("weaponRange"); }
        void SetWeaponRange(float value) const { WriteField<float>("weaponRange", value); }
        float reload() const { return ReadField<float>("reload"); }
        void SetReload(float value) const { WriteField<float>("reload", value); }
        float hitBase() const { return ReadField<float>("hitBase"); }
        void SetHitBase(float value) const { WriteField<float>("hitBase", value); }
        float meleeHit() const { return ReadField<float>("meleeHit"); }
        void SetMeleeHit(float value) const { WriteField<float>("meleeHit", value); }
        float meleeArmourMul() const { return ReadField<float>("meleeArmourMul"); }
        void SetMeleeArmourMul(float value) const { WriteField<float>("meleeArmourMul", value); }
        float hitMul() const { return ReadField<float>("hitMul"); }
        void SetHitMul(float value) const { WriteField<float>("hitMul", value); }
        float incomingMul() const { return ReadField<float>("incomingMul"); }
        void SetIncomingMul(float value) const { WriteField<float>("incomingMul", value); }
        float exposureMul() const { return ReadField<float>("exposureMul"); }
        void SetExposureMul(float value) const { WriteField<float>("exposureMul", value); }
        float height() const { return ReadField<float>("height"); }
        void SetHeight(float value) const { WriteField<float>("height", value); }
        float morale() const { return ReadField<float>("morale"); }
        void SetMorale(float value) const { WriteField<float>("morale", value); }
        float chargeBonus() const { return ReadField<float>("chargeBonus"); }
        void SetChargeBonus(float value) const { WriteField<float>("chargeBonus", value); }
        float suppress() const { return ReadField<float>("suppress"); }
        void SetSuppress(float value) const { WriteField<float>("suppress", value); }
        uint8_t arm() const { return ReadField<uint8_t>("arm"); }
        void SetArm(uint8_t value) const { WriteField<uint8_t>("arm", value); }
        uint8_t formation() const { return ReadField<uint8_t>("formation"); }
        void SetFormation(uint8_t value) const { WriteField<uint8_t>("formation", value); }
        uint8_t state() const { return ReadField<uint8_t>("state"); }
        void SetState(uint8_t value) const { WriteField<uint8_t>("state", value); }
        uint8_t run() const { return ReadField<uint8_t>("run"); }
        void SetRun(uint8_t value) const { WriteField<uint8_t>("run", value); }
        uint8_t holdFire() const { return ReadField<uint8_t>("holdFire"); }
        void SetHoldFire(uint8_t value) const { WriteField<uint8_t>("holdFire", value); }
        uint8_t volley() const { return ReadField<uint8_t>("volley"); }
        void SetVolley(uint8_t value) const { WriteField<uint8_t>("volley", value); }
        uint8_t meleeContact() const { return ReadField<uint8_t>("meleeContact"); }
        void SetMeleeContact(uint8_t value) const { WriteField<uint8_t>("meleeContact", value); }
        uint8_t digIn() const { return ReadField<uint8_t>("digIn"); }
        void SetDigIn(uint8_t value) const { WriteField<uint8_t>("digIn", value); }
        uint8_t era() const { return ReadField<uint8_t>("era"); }
        void SetEra(uint8_t value) const { WriteField<uint8_t>("era", value); }
        uint8_t moving() const { return ReadField<uint8_t>("moving"); }
        void SetMoving(uint8_t value) const { WriteField<uint8_t>("moving", value); }
        uint8_t flanked() const { return ReadField<uint8_t>("flanked"); }
        void SetFlanked(uint8_t value) const { WriteField<uint8_t>("flanked", value); }
        uint8_t age() const { return ReadField<uint8_t>("age"); }
        void SetAge(uint8_t value) const { WriteField<uint8_t>("age", value); }
        uint8_t surround() const { return ReadField<uint8_t>("surround"); }
        void SetSurround(uint8_t value) const { WriteField<uint8_t>("surround", value); }
        uint8_t pocketed() const { return ReadField<uint8_t>("pocketed"); }
        void SetPocketed(uint8_t value) const { WriteField<uint8_t>("pocketed", value); }
        uint8_t urban() const { return ReadField<uint8_t>("urban"); }
        void SetUrban(uint8_t value) const { WriteField<uint8_t>("urban", value); }
        uint8_t garrisonFrac() const { return ReadField<uint8_t>("garrisonFrac"); }
        void SetGarrisonFrac(uint8_t value) const { WriteField<uint8_t>("garrisonFrac", value); }
    };
}
