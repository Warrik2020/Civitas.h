#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Control
{
    class ControlSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ControlSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Control", "ControlSystem") {}
    public:
        void ResetRuntime() const { CallStatic("ResetRuntime", nullptr, 0); }
        void DailyPass(void* n, void* it, void* cfg, void* ctx) const { void* args[] = { n, it, cfg, &ctx }; CallStatic("DailyPass", args, 4); }
        void Restore(void* n, void* it, void* g) const { void* args[] = { n, it, g }; CallStatic("Restore", args, 3); }
        float At(int i, int x, int y) const { void* args[] = { &i, &x, &y }; return CallValue<float>("At", args, 3); }
        float At(void* g, int x, int y, float featureTiles) const { void* args[] = { g, &x, &y, &featureTiles }; return CallValue<float>("At", args, 4); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* politics() const { return ReadField<void*>("politics"); }
        void SetPolitics(void* value) const { WriteField<void*>("politics", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void SetCities(void* value) const { WriteField<void*>("cities", value); }
        void* military() const { return ReadField<void*>("military"); }
        void SetMilitary(void* value) const { WriteField<void*>("military", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void SetWorldTick(int value) const { WriteField<int>("worldTick", value); }
        float ticksPerDay() const { return ReadField<float>("ticksPerDay"); }
        void SetTicksPerDay(float value) const { WriteField<float>("ticksPerDay", value); }
        bool reasserting() const { return ReadField<bool>("reasserting"); }
        void SetReasserting(bool value) const { WriteField<bool>("reasserting", value); }
        float adminRatio() const { return ReadField<float>("adminRatio"); }
        void SetAdminRatio(float value) const { WriteField<float>("adminRatio", value); }
        int x() const { return ReadField<int>("x"); }
        void SetX(int value) const { WriteField<int>("x", value); }
        int y() const { return ReadField<int>("y"); }
        void SetY(int value) const { WriteField<int>("y", value); }
        int lobes() const { return ReadField<int>("lobes"); }
        void SetLobes(int value) const { WriteField<int>("lobes", value); }
        float h0x() const { return ReadField<float>("h0x"); }
        void SetH0x(float value) const { WriteField<float>("h0x", value); }
        float h0y() const { return ReadField<float>("h0y"); }
        void SetH0y(float value) const { WriteField<float>("h0y", value); }
        float c0() const { return ReadField<float>("c0"); }
        void SetC0(float value) const { WriteField<float>("c0", value); }
        float r0() const { return ReadField<float>("r0"); }
        void SetR0(float value) const { WriteField<float>("r0", value); }
        float h1x() const { return ReadField<float>("h1x"); }
        void SetH1x(float value) const { WriteField<float>("h1x", value); }
        float h1y() const { return ReadField<float>("h1y"); }
        void SetH1y(float value) const { WriteField<float>("h1y", value); }
        float c1() const { return ReadField<float>("c1"); }
        void SetC1(float value) const { WriteField<float>("c1", value); }
        float r1() const { return ReadField<float>("r1"); }
        void SetR1(float value) const { WriteField<float>("r1", value); }
        float h2x() const { return ReadField<float>("h2x"); }
        void SetH2x(float value) const { WriteField<float>("h2x", value); }
        float h2y() const { return ReadField<float>("h2y"); }
        void SetH2y(float value) const { WriteField<float>("h2y", value); }
        float c2() const { return ReadField<float>("c2"); }
        void SetC2(float value) const { WriteField<float>("c2", value); }
        float r2() const { return ReadField<float>("r2"); }
        void SetR2(float value) const { WriteField<float>("r2", value); }
    };
}
