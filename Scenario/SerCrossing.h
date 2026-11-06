#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerCrossing : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerCrossing(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerCrossing") {}
    public:
        int phase() const { return ReadField<int>("phase"); }
        void phase(int value) const { WriteField<int>("phase", value); }
        float goalX() const { return ReadField<float>("goalX"); }
        void goalX(float value) const { WriteField<float>("goalX", value); }
        float goalY() const { return ReadField<float>("goalY"); }
        void goalY(float value) const { WriteField<float>("goalY", value); }
        int embarkTile() const { return ReadField<int>("embarkTile"); }
        void embarkTile(int value) const { WriteField<int>("embarkTile", value); }
        int landTile() const { return ReadField<int>("landTile"); }
        void landTile(int value) const { WriteField<int>("landTile", value); }
        int landing() const { return ReadField<int>("landing"); }
        void landing(int value) const { WriteField<int>("landing", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void targetNation(int value) const { WriteField<int>("targetNation", value); }
        bool returning() const { return ReadField<bool>("returning"); }
        void returning(bool value) const { WriteField<bool>("returning", value); }
        bool landIsPort() const { return ReadField<bool>("landIsPort"); }
        void landIsPort(bool value) const { WriteField<bool>("landIsPort", value); }
        int phaseElapsed() const { return ReadField<int>("phaseElapsed"); }
        void phaseElapsed(int value) const { WriteField<int>("phaseElapsed", value); }
        int phaseLeft() const { return ReadField<int>("phaseLeft"); }
        void phaseLeft(int value) const { WriteField<int>("phaseLeft", value); }
        int taskKey() const { return ReadField<int>("taskKey"); }
        void taskKey(int value) const { WriteField<int>("taskKey", value); }
        void* lane() const { return ReadField<void*>("lane"); }
        void lane(void* value) const { WriteField<void*>("lane", value); }
        int leg() const { return ReadField<int>("leg"); }
        void leg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void legPos(float value) const { WriteField<float>("legPos", value); }
        float hullX() const { return ReadField<float>("hullX"); }
        void hullX(float value) const { WriteField<float>("hullX", value); }
        float hullY() const { return ReadField<float>("hullY"); }
        void hullY(float value) const { WriteField<float>("hullY", value); }
        float headX() const { return ReadField<float>("headX"); }
        void headX(float value) const { WriteField<float>("headX", value); }
        float headY() const { return ReadField<float>("headY"); }
        void headY(float value) const { WriteField<float>("headY", value); }
        int hullPhase() const { return ReadField<int>("hullPhase"); }
        void hullPhase(int value) const { WriteField<int>("hullPhase", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void waterTile(int value) const { WriteField<int>("waterTile", value); }
        int fromTile() const { return ReadField<int>("fromTile"); }
        void fromTile(int value) const { WriteField<int>("fromTile", value); }
        int toTile() const { return ReadField<int>("toTile"); }
        void toTile(int value) const { WriteField<int>("toTile", value); }
    };
}
