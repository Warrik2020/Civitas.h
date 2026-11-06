#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class LandUseStamper : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandUseStamper(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "LandUseStamper") {}
    public:
        void Step(void* cities, float ease) const { void* args[] = { cities, &ease }; Call("Step", args, 2); }
        void Upload(bool defer) const { void* args[] = { &defer }; Call("Upload", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        float cx() const { return ReadField<float>("cx"); }
        void SetCx(float value) const { WriteField<float>("cx", value); }
        float cy() const { return ReadField<float>("cy"); }
        void SetCy(float value) const { WriteField<float>("cy", value); }
        float urban() const { return ReadField<float>("urban"); }
        void SetUrban(float value) const { WriteField<float>("urban", value); }
        float ring() const { return ReadField<float>("ring"); }
        void SetRing(float value) const { WriteField<float>("ring", value); }
        float core() const { return ReadField<float>("core"); }
        void SetCore(float value) const { WriteField<float>("core", value); }
        float shownU() const { return ReadField<float>("shownU"); }
        void SetShownU(float value) const { WriteField<float>("shownU", value); }
        float shownR() const { return ReadField<float>("shownR"); }
        void SetShownR(float value) const { WriteField<float>("shownR", value); }
        float shownC() const { return ReadField<float>("shownC"); }
        void SetShownC(float value) const { WriteField<float>("shownC", value); }
        float drawnU() const { return ReadField<float>("drawnU"); }
        void SetDrawnU(float value) const { WriteField<float>("drawnU", value); }
        float drawnR() const { return ReadField<float>("drawnR"); }
        void SetDrawnR(float value) const { WriteField<float>("drawnR", value); }
        float drawnC() const { return ReadField<float>("drawnC"); }
        void SetDrawnC(float value) const { WriteField<float>("drawnC", value); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
        float hinter() const { return ReadField<float>("hinter"); }
        void SetHinter(float value) const { WriteField<float>("hinter", value); }
        float shownH() const { return ReadField<float>("shownH"); }
        void SetShownH(float value) const { WriteField<float>("shownH", value); }
        float drawnH() const { return ReadField<float>("drawnH"); }
        void SetDrawnH(float value) const { WriteField<float>("drawnH", value); }
        float drawnP() const { return ReadField<float>("drawnP"); }
        void SetDrawnP(float value) const { WriteField<float>("drawnP", value); }
        void* drawnRect() const { return ReadField<void*>("drawnRect"); }
        void SetDrawnRect(void* value) const { WriteField<void*>("drawnRect", value); }
        bool hasRect() const { return ReadField<bool>("hasRect"); }
        void SetHasRect(bool value) const { WriteField<bool>("hasRect", value); }
        void* phase() const { return ReadField<void*>("phase"); }
        void SetPhase(void* value) const { WriteField<void*>("phase", value); }
        void* amp() const { return ReadField<void*>("amp"); }
        void SetAmp(void* value) const { WriteField<void*>("amp", value); }
        bool seen() const { return ReadField<bool>("seen"); }
        void SetSeen(bool value) const { WriteField<bool>("seen", value); }
    };
}
