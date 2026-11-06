#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CrossingPlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CrossingPlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CrossingPlan") {}
    public:
        void Reset() const { Call("Reset", nullptr, 0); }
        void CopyFrom(void* o) const { void* __callArgs[] = { o }; Call("CopyFrom", __callArgs, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void divisionId(int value) const { WriteField<int>("divisionId", value); }
        void* from() const { return ReadField<void*>("from"); }
        void from(void* value) const { WriteField<void*>("from", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void goal(void* value) const { WriteField<void*>("goal", value); }
        int goalTile() const { return ReadField<int>("goalTile"); }
        void goalTile(int value) const { WriteField<int>("goalTile", value); }
        int embarkTile() const { return ReadField<int>("embarkTile"); }
        void embarkTile(int value) const { WriteField<int>("embarkTile", value); }
        int embarkWater() const { return ReadField<int>("embarkWater"); }
        void embarkWater(int value) const { WriteField<int>("embarkWater", value); }
        bool embarkIsPort() const { return ReadField<bool>("embarkIsPort"); }
        void embarkIsPort(bool value) const { WriteField<bool>("embarkIsPort", value); }
        int embarkPortCityTile() const { return ReadField<int>("embarkPortCityTile"); }
        void embarkPortCityTile(int value) const { WriteField<int>("embarkPortCityTile", value); }
        int landTile() const { return ReadField<int>("landTile"); }
        void landTile(int value) const { WriteField<int>("landTile", value); }
        int landWater() const { return ReadField<int>("landWater"); }
        void landWater(int value) const { WriteField<int>("landWater", value); }
        bool landIsPort() const { return ReadField<bool>("landIsPort"); }
        void landIsPort(bool value) const { WriteField<bool>("landIsPort", value); }
        int landPortCityTile() const { return ReadField<int>("landPortCityTile"); }
        void landPortCityTile(int value) const { WriteField<int>("landPortCityTile", value); }
        int landing() const { return ReadField<int>("landing"); }
        void landing(int value) const { WriteField<int>("landing", value); }
        int landOwnerId() const { return ReadField<int>("landOwnerId"); }
        void landOwnerId(int value) const { WriteField<int>("landOwnerId", value); }
        void* lane() const { return ReadField<void*>("lane"); }
        float laneTiles() const { return ReadField<float>("laneTiles"); }
        void laneTiles(float value) const { WriteField<float>("laneTiles", value); }
        int walkToQuayTicks() const { return ReadField<int>("walkToQuayTicks"); }
        void walkToQuayTicks(int value) const { WriteField<int>("walkToQuayTicks", value); }
        int embarkTicks() const { return ReadField<int>("embarkTicks"); }
        void embarkTicks(int value) const { WriteField<int>("embarkTicks", value); }
        int sailTicks() const { return ReadField<int>("sailTicks"); }
        void sailTicks(int value) const { WriteField<int>("sailTicks", value); }
        int disembarkTicks() const { return ReadField<int>("disembarkTicks"); }
        void disembarkTicks(int value) const { WriteField<int>("disembarkTicks", value); }
        int walkInlandTicks() const { return ReadField<int>("walkInlandTicks"); }
        void walkInlandTicks(int value) const { WriteField<int>("walkInlandTicks", value); }
        int totalTicks() const { return ReadField<int>("totalTicks"); }
        void totalTicks(int value) const { WriteField<int>("totalTicks", value); }
        int dangerFleets() const { return ReadField<int>("dangerFleets"); }
        void dangerFleets(int value) const { WriteField<int>("dangerFleets", value); }
        float dangerPower() const { return ReadField<float>("dangerPower"); }
        void dangerPower(float value) const { WriteField<float>("dangerPower", value); }
        int dangerFirstFleetId() const { return ReadField<int>("dangerFirstFleetId"); }
        void dangerFirstFleetId(int value) const { WriteField<int>("dangerFirstFleetId", value); }
        bool landingBlockedNow() const { return ReadField<bool>("landingBlockedNow"); }
        void landingBlockedNow(bool value) const { WriteField<bool>("landingBlockedNow", value); }
        bool opposedLanding() const { return ReadField<bool>("opposedLanding"); }
        void opposedLanding(bool value) const { WriteField<bool>("opposedLanding", value); }
        int failure() const { return ReadField<int>("failure"); }
        void failure(int value) const { WriteField<int>("failure", value); }
        int plannedTick() const { return ReadField<int>("plannedTick"); }
        void plannedTick(int value) const { WriteField<int>("plannedTick", value); }
    };
}
