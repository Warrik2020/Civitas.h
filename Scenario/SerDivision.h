#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerDivision : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerDivision(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerDivision") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void ordinal(int value) const { WriteField<int>("ordinal", value); }
        int type() const { return ReadField<int>("type"); }
        void type(int value) const { WriteField<int>("type", value); }
        float x() const { return ReadField<float>("x"); }
        void x(float value) const { WriteField<float>("x", value); }
        float y() const { return ReadField<float>("y"); }
        void y(float value) const { WriteField<float>("y", value); }
        float org() const { return ReadField<float>("org"); }
        void org(float value) const { WriteField<float>("org", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void manpower(float value) const { WriteField<float>("manpower", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void manualControl(bool value) const { WriteField<bool>("manualControl", value); }
        bool attackOrder() const { return ReadField<bool>("attackOrder"); }
        void attackOrder(bool value) const { WriteField<bool>("attackOrder", value); }
        bool defendOnly() const { return ReadField<bool>("defendOnly"); }
        void defendOnly(bool value) const { WriteField<bool>("defendOnly", value); }
        float facingX() const { return ReadField<float>("facingX"); }
        void facingX(float value) const { WriteField<float>("facingX", value); }
        float facingY() const { return ReadField<float>("facingY"); }
        void facingY(float value) const { WriteField<float>("facingY", value); }
        bool hasFacing() const { return ReadField<bool>("hasFacing"); }
        void hasFacing(bool value) const { WriteField<bool>("hasFacing", value); }
        int groupKey() const { return ReadField<int>("groupKey"); }
        void groupKey(int value) const { WriteField<int>("groupKey", value); }
        int weaponDesignId() const { return ReadField<int>("weaponDesignId"); }
        void weaponDesignId(int value) const { WriteField<int>("weaponDesignId", value); }
        float weaponScore() const { return ReadField<float>("weaponScore"); }
        void weaponScore(float value) const { WriteField<float>("weaponScore", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void templateId(int value) const { WriteField<int>("templateId", value); }
        int templateRevision() const { return ReadField<int>("templateRevision"); }
        void templateRevision(int value) const { WriteField<int>("templateRevision", value); }
        void* kit() const { return ReadField<void*>("kit"); }
        void kit(void* value) const { WriteField<void*>("kit", value); }
        void* est() const { return ReadField<void*>("est"); }
        void est(void* value) const { WriteField<void*>("est", value); }
        void* kitNames() const { return ReadField<void*>("kitNames"); }
        void kitNames(void* value) const { WriteField<void*>("kitNames", value); }
        void* kitMakers() const { return ReadField<void*>("kitMakers"); }
        void kitMakers(void* value) const { WriteField<void*>("kitMakers", value); }
        void* kitDesignIds() const { return ReadField<void*>("kitDesignIds"); }
        void kitDesignIds(void* value) const { WriteField<void*>("kitDesignIds", value); }
        int raisedTick() const { return ReadField<int>("raisedTick"); }
        void raisedTick(int value) const { WriteField<int>("raisedTick", value); }
        int raisedAgeTicks() const { return ReadField<int>("raisedAgeTicks"); }
        void raisedAgeTicks(int value) const { WriteField<int>("raisedAgeTicks", value); }
        int homeStateId() const { return ReadField<int>("homeStateId"); }
        void homeStateId(int value) const { WriteField<int>("homeStateId", value); }
        bool standingPin() const { return ReadField<bool>("standingPin"); }
        void standingPin(bool value) const { WriteField<bool>("standingPin", value); }
        float youth() const { return ReadField<float>("youth"); }
        void youth(float value) const { WriteField<float>("youth", value); }
        int youthGrownTick() const { return ReadField<int>("youthGrownTick"); }
        void youthGrownTick(int value) const { WriteField<int>("youthGrownTick", value); }
        int youthGrownLeft() const { return ReadField<int>("youthGrownLeft"); }
        void youthGrownLeft(int value) const { WriteField<int>("youthGrownLeft", value); }
        int strandedIn() const { return ReadField<int>("strandedIn"); }
        void strandedIn(int value) const { WriteField<int>("strandedIn", value); }
        int incursionIn() const { return ReadField<int>("incursionIn"); }
        void incursionIn(int value) const { WriteField<int>("incursionIn", value); }
        int incursionStance() const { return ReadField<int>("incursionStance"); }
        void incursionStance(int value) const { WriteField<int>("incursionStance", value); }
        float logLevel() const { return ReadField<float>("logLevel"); }
        void logLevel(float value) const { WriteField<float>("logLevel", value); }
        void* crossing() const { return ReadField<void*>("crossing"); }
        void crossing(void* value) const { WriteField<void*>("crossing", value); }
        int originNationId() const { return ReadField<int>("originNationId"); }
        void originNationId(int value) const { WriteField<int>("originNationId", value); }
        int encircledTicks() const { return ReadField<int>("encircledTicks"); }
        void encircledTicks(int value) const { WriteField<int>("encircledTicks", value); }
    };
}
