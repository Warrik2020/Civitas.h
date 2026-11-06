#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval::AI
{
    class NavalAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval.AI", "NavalAI") {}
    public:
        void ClearTasks() const { CallStatic("ClearTasks", nullptr, 0); }
        void* CaptureTaskForces(int tick, void* fleetIndex, void* divisionIndex) const { void* args[] = { &tick, fleetIndex, divisionIndex }; return CallStatic("CaptureTaskForces", args, 3); }
        void RestoreTaskForces(void* saved, void* fleetIdsByIndex, void* members, void* military) const { void* args[] = { saved, fleetIdsByIndex, members, military }; CallStatic("RestoreTaskForces", args, 4); }
        int TaskKeyOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("TaskKeyOf", args, 1); }
        void* Evaluate(void* mm, void* mil, void* n, void* it, void* cities, int tick) const { void* args[] = { mm, mil, n, it, cities, &tick }; return CallStatic("Evaluate", args, 6); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int beach() const { return ReadField<int>("beach"); }
        void SetBeach(int value) const { WriteField<int>("beach", value); }
        int cityTile() const { return ReadField<int>("cityTile"); }
        void SetCityTile(int value) const { WriteField<int>("cityTile", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        int enemy() const { return ReadField<int>("enemy"); }
        void SetEnemy(int value) const { WriteField<int>("enemy", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int bestCity() const { return ReadField<int>("bestCity"); }
        void SetBestCity(int value) const { WriteField<int>("bestCity", value); }
        float bestPop() const { return ReadField<float>("bestPop"); }
        void SetBestPop(float value) const { WriteField<float>("bestPop", value); }
    };
}
