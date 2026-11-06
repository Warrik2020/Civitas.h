#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityKernelContext : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityKernelContext(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityKernelContext") {}
    public:
        bool IsCoOfficial(int axisBase, int nationId, int root) const { void* args[] = { &axisBase, &nationId, &root }; return CallValue<bool>("IsCoOfficial", args, 3); }
        void* policyPush() const { return ReadField<void*>("policyPush"); }
        void SetPolicyPush(void* value) const { WriteField<void*>("policyPush", value); }
        void* policyGuard() const { return ReadField<void*>("policyGuard"); }
        void SetPolicyGuard(void* value) const { WriteField<void*>("policyGuard", value); }
        void* pressing() const { return ReadField<void*>("pressing"); }
        void SetPressing(void* value) const { WriteField<void*>("pressing", value); }
        uint8_t PressRealm() const { return ReadStaticField<uint8_t>("PressRealm"); }
        uint8_t PressZone() const { return ReadStaticField<uint8_t>("PressZone"); }
        void* promoteOwner() const { return ReadField<void*>("promoteOwner"); }
        void SetPromoteOwner(void* value) const { WriteField<void*>("promoteOwner", value); }
        void* promoteAxes() const { return ReadField<void*>("promoteAxes"); }
        void SetPromoteAxes(void* value) const { WriteField<void*>("promoteAxes", value); }
        void* assignRoot() const { return ReadField<void*>("assignRoot"); }
        void SetAssignRoot(void* value) const { WriteField<void*>("assignRoot", value); }
        void* assignPainter() const { return ReadField<void*>("assignPainter"); }
        void SetAssignPainter(void* value) const { WriteField<void*>("assignPainter", value); }
        void* titularRoot() const { return ReadField<void*>("titularRoot"); }
        void SetTitularRoot(void* value) const { WriteField<void*>("titularRoot", value); }
        void* founderOf() const { return ReadField<void*>("founderOf"); }
        void SetFounderOf(void* value) const { WriteField<void*>("founderOf", value); }
        void* rootOf() const { return ReadField<void*>("rootOf"); }
        void SetRootOf(void* value) const { WriteField<void*>("rootOf", value); }
        void* originOfRoot() const { return ReadField<void*>("originOfRoot"); }
        void SetOriginOfRoot(void* value) const { WriteField<void*>("originOfRoot", value); }
        int MaxCoOfficials() const { return ReadStaticField<int>("MaxCoOfficials"); }
        int MaxOfficials() const { return ReadStaticField<int>("MaxOfficials"); }
        void* coOfficialRoot() const { return ReadField<void*>("coOfficialRoot"); }
        void SetCoOfficialRoot(void* value) const { WriteField<void*>("coOfficialRoot", value); }
        void* bindPartner() const { return ReadField<void*>("bindPartner"); }
        void SetBindPartner(void* value) const { WriteField<void*>("bindPartner", value); }
        void* bindStrength() const { return ReadField<void*>("bindStrength"); }
        void SetBindStrength(void* value) const { WriteField<void*>("bindStrength", value); }
        int bindCap() const { return ReadField<int>("bindCap"); }
        void SetBindCap(int value) const { WriteField<int>("bindCap", value); }
        void* standing() const { return ReadField<void*>("standing"); }
        void SetStanding(void* value) const { WriteField<void*>("standing", value); }
        int standingGroupCap() const { return ReadField<int>("standingGroupCap"); }
        void SetStandingGroupCap(int value) const { WriteField<int>("standingGroupCap", value); }
        int rungNations() const { return ReadField<int>("rungNations"); }
        void SetRungNations(int value) const { WriteField<int>("rungNations", value); }
        void* defaultStanding() const { return ReadField<void*>("defaultStanding"); }
        void SetDefaultStanding(void* value) const { WriteField<void*>("defaultStanding", value); }
        void* zoneRow() const { return ReadField<void*>("zoneRow"); }
        void SetZoneRow(void* value) const { WriteField<void*>("zoneRow", value); }
        void* zoneRung() const { return ReadField<void*>("zoneRung"); }
        void SetZoneRung(void* value) const { WriteField<void*>("zoneRung", value); }
        void* orderFlags() const { return ReadField<void*>("orderFlags"); }
        void SetOrderFlags(void* value) const { WriteField<void*>("orderFlags", value); }
        uint8_t RealmOusts() const { return ReadStaticField<uint8_t>("RealmOusts"); }
        uint8_t ZoneRules() const { return ReadStaticField<uint8_t>("ZoneRules"); }
        uint8_t ZoneOusts() const { return ReadStaticField<uint8_t>("ZoneOusts"); }
        uint8_t Forging() const { return ReadStaticField<uint8_t>("Forging"); }
        void* mixOpen() const { return ReadField<void*>("mixOpen"); }
        void SetMixOpen(void* value) const { WriteField<void*>("mixOpen", value); }
        void* forgeRoot() const { return ReadField<void*>("forgeRoot"); }
        void SetForgeRoot(void* value) const { WriteField<void*>("forgeRoot", value); }
        void* forgeParent() const { return ReadField<void*>("forgeParent"); }
        void SetForgeParent(void* value) const { WriteField<void*>("forgeParent", value); }
        int MaxForgeParents() const { return ReadStaticField<int>("MaxForgeParents"); }
        void* homeRulePeopleByState() const { return ReadField<void*>("homeRulePeopleByState"); }
        void SetHomeRulePeopleByState(void* value) const { WriteField<void*>("homeRulePeopleByState", value); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void SetStateId(void* value) const { WriteField<void*>("stateId", value); }
        void* people() const { return ReadField<void*>("people"); }
        void SetPeople(void* value) const { WriteField<void*>("people", value); }
        float meanPeople() const { return ReadField<float>("meanPeople"); }
        void SetMeanPeople(float value) const { WriteField<float>("meanPeople", value); }
        void* cradles() const { return ReadField<void*>("cradles"); }
        void SetCradles(void* value) const { WriteField<void*>("cradles", value); }
        void* shape() const { return ReadField<void*>("shape"); }
        void SetShape(void* value) const { WriteField<void*>("shape", value); }
        void* byId() const { return ReadField<void*>("byId"); }
        void SetById(void* value) const { WriteField<void*>("byId", value); }
        int nationCap() const { return ReadField<int>("nationCap"); }
        void SetNationCap(int value) const { WriteField<int>("nationCap", value); }
        int groupCap() const { return ReadField<int>("groupCap"); }
        void SetGroupCap(int value) const { WriteField<int>("groupCap", value); }
    };
}
