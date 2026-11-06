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
        bool IsCoOfficial(int axisBase, int nationId, int root) const { void* __callArgs[] = { &axisBase, &nationId, &root }; return CallValue<bool>("IsCoOfficial", __callArgs, 3); }
        void* policyPush() const { return ReadField<void*>("policyPush"); }
        void policyPush(void* value) const { WriteField<void*>("policyPush", value); }
        void* policyGuard() const { return ReadField<void*>("policyGuard"); }
        void policyGuard(void* value) const { WriteField<void*>("policyGuard", value); }
        void* pressing() const { return ReadField<void*>("pressing"); }
        void pressing(void* value) const { WriteField<void*>("pressing", value); }
        uint8_t PressRealm() const { return ReadStaticField<uint8_t>("PressRealm"); }
        uint8_t PressZone() const { return ReadStaticField<uint8_t>("PressZone"); }
        void* promoteOwner() const { return ReadField<void*>("promoteOwner"); }
        void promoteOwner(void* value) const { WriteField<void*>("promoteOwner", value); }
        void* promoteAxes() const { return ReadField<void*>("promoteAxes"); }
        void promoteAxes(void* value) const { WriteField<void*>("promoteAxes", value); }
        void* assignRoot() const { return ReadField<void*>("assignRoot"); }
        void assignRoot(void* value) const { WriteField<void*>("assignRoot", value); }
        void* assignPainter() const { return ReadField<void*>("assignPainter"); }
        void assignPainter(void* value) const { WriteField<void*>("assignPainter", value); }
        void* titularRoot() const { return ReadField<void*>("titularRoot"); }
        void titularRoot(void* value) const { WriteField<void*>("titularRoot", value); }
        void* founderOf() const { return ReadField<void*>("founderOf"); }
        void founderOf(void* value) const { WriteField<void*>("founderOf", value); }
        void* rootOf() const { return ReadField<void*>("rootOf"); }
        void rootOf(void* value) const { WriteField<void*>("rootOf", value); }
        void* originOfRoot() const { return ReadField<void*>("originOfRoot"); }
        void originOfRoot(void* value) const { WriteField<void*>("originOfRoot", value); }
        int MaxCoOfficials() const { return ReadStaticField<int>("MaxCoOfficials"); }
        int MaxOfficials() const { return ReadStaticField<int>("MaxOfficials"); }
        void* coOfficialRoot() const { return ReadField<void*>("coOfficialRoot"); }
        void coOfficialRoot(void* value) const { WriteField<void*>("coOfficialRoot", value); }
        void* bindPartner() const { return ReadField<void*>("bindPartner"); }
        void bindPartner(void* value) const { WriteField<void*>("bindPartner", value); }
        void* bindStrength() const { return ReadField<void*>("bindStrength"); }
        void bindStrength(void* value) const { WriteField<void*>("bindStrength", value); }
        int bindCap() const { return ReadField<int>("bindCap"); }
        void bindCap(int value) const { WriteField<int>("bindCap", value); }
        void* standing() const { return ReadField<void*>("standing"); }
        void standing(void* value) const { WriteField<void*>("standing", value); }
        int standingGroupCap() const { return ReadField<int>("standingGroupCap"); }
        void standingGroupCap(int value) const { WriteField<int>("standingGroupCap", value); }
        int rungNations() const { return ReadField<int>("rungNations"); }
        void rungNations(int value) const { WriteField<int>("rungNations", value); }
        void* defaultStanding() const { return ReadField<void*>("defaultStanding"); }
        void defaultStanding(void* value) const { WriteField<void*>("defaultStanding", value); }
        void* zoneRow() const { return ReadField<void*>("zoneRow"); }
        void zoneRow(void* value) const { WriteField<void*>("zoneRow", value); }
        void* zoneRung() const { return ReadField<void*>("zoneRung"); }
        void zoneRung(void* value) const { WriteField<void*>("zoneRung", value); }
        void* orderFlags() const { return ReadField<void*>("orderFlags"); }
        void orderFlags(void* value) const { WriteField<void*>("orderFlags", value); }
        uint8_t RealmOusts() const { return ReadStaticField<uint8_t>("RealmOusts"); }
        uint8_t ZoneRules() const { return ReadStaticField<uint8_t>("ZoneRules"); }
        uint8_t ZoneOusts() const { return ReadStaticField<uint8_t>("ZoneOusts"); }
        uint8_t Forging() const { return ReadStaticField<uint8_t>("Forging"); }
        void* mixOpen() const { return ReadField<void*>("mixOpen"); }
        void mixOpen(void* value) const { WriteField<void*>("mixOpen", value); }
        void* forgeRoot() const { return ReadField<void*>("forgeRoot"); }
        void forgeRoot(void* value) const { WriteField<void*>("forgeRoot", value); }
        void* forgeParent() const { return ReadField<void*>("forgeParent"); }
        void forgeParent(void* value) const { WriteField<void*>("forgeParent", value); }
        int MaxForgeParents() const { return ReadStaticField<int>("MaxForgeParents"); }
        void* homeRulePeopleByState() const { return ReadField<void*>("homeRulePeopleByState"); }
        void homeRulePeopleByState(void* value) const { WriteField<void*>("homeRulePeopleByState", value); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void stateId(void* value) const { WriteField<void*>("stateId", value); }
        void* people() const { return ReadField<void*>("people"); }
        void people(void* value) const { WriteField<void*>("people", value); }
        float meanPeople() const { return ReadField<float>("meanPeople"); }
        void meanPeople(float value) const { WriteField<float>("meanPeople", value); }
        void* cradles() const { return ReadField<void*>("cradles"); }
        void cradles(void* value) const { WriteField<void*>("cradles", value); }
        void* shape() const { return ReadField<void*>("shape"); }
        void shape(void* value) const { WriteField<void*>("shape", value); }
        void* byId() const { return ReadField<void*>("byId"); }
        void byId(void* value) const { WriteField<void*>("byId", value); }
        int nationCap() const { return ReadField<int>("nationCap"); }
        void nationCap(int value) const { WriteField<int>("nationCap", value); }
        int groupCap() const { return ReadField<int>("groupCap"); }
        void groupCap(int value) const { WriteField<int>("groupCap", value); }
    };
}
