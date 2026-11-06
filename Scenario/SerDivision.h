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
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int ordinal() const { return ReadField<int>("ordinal"); }
        void SetOrdinal(int value) const { WriteField<int>("ordinal", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        float x() const { return ReadField<float>("x"); }
        void SetX(float value) const { WriteField<float>("x", value); }
        float y() const { return ReadField<float>("y"); }
        void SetY(float value) const { WriteField<float>("y", value); }
        float org() const { return ReadField<float>("org"); }
        void SetOrg(float value) const { WriteField<float>("org", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void SetManpower(float value) const { WriteField<float>("manpower", value); }
        bool manualControl() const { return ReadField<bool>("manualControl"); }
        void SetManualControl(bool value) const { WriteField<bool>("manualControl", value); }
        bool attackOrder() const { return ReadField<bool>("attackOrder"); }
        void SetAttackOrder(bool value) const { WriteField<bool>("attackOrder", value); }
        bool defendOnly() const { return ReadField<bool>("defendOnly"); }
        void SetDefendOnly(bool value) const { WriteField<bool>("defendOnly", value); }
        float facingX() const { return ReadField<float>("facingX"); }
        void SetFacingX(float value) const { WriteField<float>("facingX", value); }
        float facingY() const { return ReadField<float>("facingY"); }
        void SetFacingY(float value) const { WriteField<float>("facingY", value); }
        bool hasFacing() const { return ReadField<bool>("hasFacing"); }
        void SetHasFacing(bool value) const { WriteField<bool>("hasFacing", value); }
        int groupKey() const { return ReadField<int>("groupKey"); }
        void SetGroupKey(int value) const { WriteField<int>("groupKey", value); }
        int weaponDesignId() const { return ReadField<int>("weaponDesignId"); }
        void SetWeaponDesignId(int value) const { WriteField<int>("weaponDesignId", value); }
        float weaponScore() const { return ReadField<float>("weaponScore"); }
        void SetWeaponScore(float value) const { WriteField<float>("weaponScore", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void SetTemplateId(int value) const { WriteField<int>("templateId", value); }
        int templateRevision() const { return ReadField<int>("templateRevision"); }
        void SetTemplateRevision(int value) const { WriteField<int>("templateRevision", value); }
        void* kit() const { return ReadField<void*>("kit"); }
        void SetKit(void* value) const { WriteField<void*>("kit", value); }
        void* est() const { return ReadField<void*>("est"); }
        void SetEst(void* value) const { WriteField<void*>("est", value); }
        void* kitNames() const { return ReadField<void*>("kitNames"); }
        void SetKitNames(void* value) const { WriteField<void*>("kitNames", value); }
        void* kitMakers() const { return ReadField<void*>("kitMakers"); }
        void SetKitMakers(void* value) const { WriteField<void*>("kitMakers", value); }
        void* kitDesignIds() const { return ReadField<void*>("kitDesignIds"); }
        void SetKitDesignIds(void* value) const { WriteField<void*>("kitDesignIds", value); }
        int raisedTick() const { return ReadField<int>("raisedTick"); }
        void SetRaisedTick(int value) const { WriteField<int>("raisedTick", value); }
        int raisedAgeTicks() const { return ReadField<int>("raisedAgeTicks"); }
        void SetRaisedAgeTicks(int value) const { WriteField<int>("raisedAgeTicks", value); }
        int homeStateId() const { return ReadField<int>("homeStateId"); }
        void SetHomeStateId(int value) const { WriteField<int>("homeStateId", value); }
        bool standingPin() const { return ReadField<bool>("standingPin"); }
        void SetStandingPin(bool value) const { WriteField<bool>("standingPin", value); }
        float youth() const { return ReadField<float>("youth"); }
        void SetYouth(float value) const { WriteField<float>("youth", value); }
        int youthGrownTick() const { return ReadField<int>("youthGrownTick"); }
        void SetYouthGrownTick(int value) const { WriteField<int>("youthGrownTick", value); }
        int youthGrownLeft() const { return ReadField<int>("youthGrownLeft"); }
        void SetYouthGrownLeft(int value) const { WriteField<int>("youthGrownLeft", value); }
        int strandedIn() const { return ReadField<int>("strandedIn"); }
        void SetStrandedIn(int value) const { WriteField<int>("strandedIn", value); }
        int incursionIn() const { return ReadField<int>("incursionIn"); }
        void SetIncursionIn(int value) const { WriteField<int>("incursionIn", value); }
        int incursionStance() const { return ReadField<int>("incursionStance"); }
        void SetIncursionStance(int value) const { WriteField<int>("incursionStance", value); }
        float logLevel() const { return ReadField<float>("logLevel"); }
        void SetLogLevel(float value) const { WriteField<float>("logLevel", value); }
        void* crossing() const { return ReadField<void*>("crossing"); }
        void SetCrossing(void* value) const { WriteField<void*>("crossing", value); }
        int originNationId() const { return ReadField<int>("originNationId"); }
        void SetOriginNationId(int value) const { WriteField<int>("originNationId", value); }
        int encircledTicks() const { return ReadField<int>("encircledTicks"); }
        void SetEncircledTicks(int value) const { WriteField<int>("encircledTicks", value); }
    };
}
