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
        void SetPhase(int value) const { WriteField<int>("phase", value); }
        float goalX() const { return ReadField<float>("goalX"); }
        void SetGoalX(float value) const { WriteField<float>("goalX", value); }
        float goalY() const { return ReadField<float>("goalY"); }
        void SetGoalY(float value) const { WriteField<float>("goalY", value); }
        int embarkTile() const { return ReadField<int>("embarkTile"); }
        void SetEmbarkTile(int value) const { WriteField<int>("embarkTile", value); }
        int landTile() const { return ReadField<int>("landTile"); }
        void SetLandTile(int value) const { WriteField<int>("landTile", value); }
        int landing() const { return ReadField<int>("landing"); }
        void SetLanding(int value) const { WriteField<int>("landing", value); }
        int targetNation() const { return ReadField<int>("targetNation"); }
        void SetTargetNation(int value) const { WriteField<int>("targetNation", value); }
        bool returning() const { return ReadField<bool>("returning"); }
        void SetReturning(bool value) const { WriteField<bool>("returning", value); }
        bool landIsPort() const { return ReadField<bool>("landIsPort"); }
        void SetLandIsPort(bool value) const { WriteField<bool>("landIsPort", value); }
        int phaseElapsed() const { return ReadField<int>("phaseElapsed"); }
        void SetPhaseElapsed(int value) const { WriteField<int>("phaseElapsed", value); }
        int phaseLeft() const { return ReadField<int>("phaseLeft"); }
        void SetPhaseLeft(int value) const { WriteField<int>("phaseLeft", value); }
        int taskKey() const { return ReadField<int>("taskKey"); }
        void SetTaskKey(int value) const { WriteField<int>("taskKey", value); }
        void* lane() const { return ReadField<void*>("lane"); }
        void SetLane(void* value) const { WriteField<void*>("lane", value); }
        int leg() const { return ReadField<int>("leg"); }
        void SetLeg(int value) const { WriteField<int>("leg", value); }
        float legPos() const { return ReadField<float>("legPos"); }
        void SetLegPos(float value) const { WriteField<float>("legPos", value); }
        float hullX() const { return ReadField<float>("hullX"); }
        void SetHullX(float value) const { WriteField<float>("hullX", value); }
        float hullY() const { return ReadField<float>("hullY"); }
        void SetHullY(float value) const { WriteField<float>("hullY", value); }
        float headX() const { return ReadField<float>("headX"); }
        void SetHeadX(float value) const { WriteField<float>("headX", value); }
        float headY() const { return ReadField<float>("headY"); }
        void SetHeadY(float value) const { WriteField<float>("headY", value); }
        int hullPhase() const { return ReadField<int>("hullPhase"); }
        void SetHullPhase(int value) const { WriteField<int>("hullPhase", value); }
        int waterTile() const { return ReadField<int>("waterTile"); }
        void SetWaterTile(int value) const { WriteField<int>("waterTile", value); }
        int fromTile() const { return ReadField<int>("fromTile"); }
        void SetFromTile(int value) const { WriteField<int>("fromTile", value); }
        int toTile() const { return ReadField<int>("toTile"); }
        void SetToTile(int value) const { WriteField<int>("toTile", value); }
    };
}
