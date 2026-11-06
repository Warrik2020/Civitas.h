#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class DivisionSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "DivisionSpec") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int arm() const { return ReadField<int>("arm"); }
        void SetArm(int value) const { WriteField<int>("arm", value); }
        int men() const { return ReadField<int>("men"); }
        void SetMen(int value) const { WriteField<int>("men", value); }
        int establishment() const { return ReadField<int>("establishment"); }
        void SetEstablishment(int value) const { WriteField<int>("establishment", value); }
        float org01() const { return ReadField<float>("org01"); }
        void SetOrg01(float value) const { WriteField<float>("org01", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void SetFacing(void* value) const { WriteField<void*>("facing", value); }
        void* profile() const { return ReadField<void*>("profile"); }
        void SetProfile(void* value) const { WriteField<void*>("profile", value); }
        int tanks() const { return ReadField<int>("tanks"); }
        void SetTanks(int value) const { WriteField<int>("tanks", value); }
        int trucks() const { return ReadField<int>("trucks"); }
        void SetTrucks(int value) const { WriteField<int>("trucks", value); }
        int riflemen() const { return ReadField<int>("riflemen"); }
        void SetRiflemen(int value) const { WriteField<int>("riflemen", value); }
        int guns() const { return ReadField<int>("guns"); }
        void SetGuns(int value) const { WriteField<int>("guns", value); }
        int crewPerGun() const { return ReadField<int>("crewPerGun"); }
        void SetCrewPerGun(int value) const { WriteField<int>("crewPerGun", value); }
        float attackFactors() const { return ReadField<float>("attackFactors"); }
        void SetAttackFactors(float value) const { WriteField<float>("attackFactors", value); }
        float incomingFactors() const { return ReadField<float>("incomingFactors"); }
        void SetIncomingFactors(float value) const { WriteField<float>("incomingFactors", value); }
        bool heldGround() const { return ReadField<bool>("heldGround"); }
        void SetHeldGround(bool value) const { WriteField<bool>("heldGround", value); }
        uint32_t color() const { return ReadField<uint32_t>("color"); }
        void SetColor(uint32_t value) const { WriteField<uint32_t>("color", value); }
        bool auto_() const { return ReadField<bool>("auto"); }
        void SetAuto(bool value) const { WriteField<bool>("auto", value); }
        int aiLevel() const { return ReadField<int>("aiLevel"); }
        void SetAiLevel(int value) const { WriteField<int>("aiLevel", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int strategicId() const { return ReadField<int>("strategicId"); }
        void SetStrategicId(int value) const { WriteField<int>("strategicId", value); }
        int layout() const { return ReadField<int>("layout"); }
        void SetLayout(int value) const { WriteField<int>("layout", value); }
        float frontHalfWidth() const { return ReadField<float>("frontHalfWidth"); }
        void SetFrontHalfWidth(float value) const { WriteField<float>("frontHalfWidth", value); }
        int worksGroup() const { return ReadField<int>("worksGroup"); }
        void SetWorksGroup(int value) const { WriteField<int>("worksGroup", value); }
        bool frontEdge() const { return ReadField<bool>("frontEdge"); }
        void SetFrontEdge(bool value) const { WriteField<bool>("frontEdge", value); }
        bool exactMorale() const { return ReadField<bool>("exactMorale"); }
        void SetExactMorale(bool value) const { WriteField<bool>("exactMorale", value); }
        int sector() const { return ReadField<int>("sector"); }
        void SetSector(int value) const { WriteField<int>("sector", value); }
    };
}
