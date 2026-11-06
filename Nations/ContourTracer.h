#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class ContourTracer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ContourTracer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "ContourTracer") {}
    public:
        void* Trace(void* field, float iso, int minX, int minY, int maxX, int maxY, int chaikinIterations, float rdpEpsilon, float cornerRoundPx = 0f, int cornerRoundPasses = 1) const { void* args[] = { field, &iso, &minX, &minY, &maxX, &maxY, &chaikinIterations, &rdpEpsilon, &cornerRoundPx, &cornerRoundPasses }; return Call("Trace", args, 10); }
        void BeginScan(int minX, int minY, int maxX, int maxY) const { void* args[] = { &minX, &minY, &maxX, &maxY }; Call("BeginScan", args, 4); }
        void BeginSmooth(void* raw, int chaikinIterations, float rdpEpsilon, float cornerRoundPx, int cornerRoundPasses, void* worldOut) const { void* args[] = { raw, &chaikinIterations, &rdpEpsilon, &cornerRoundPx, &cornerRoundPasses, worldOut }; Call("BeginSmooth", args, 6); }
        bool SmoothStep() const { return CallValue<bool>("SmoothStep", nullptr, 0); }
        bool SkipFullChunks() const { return ReadField<bool>("SkipFullChunks"); }
        void SetSkipFullChunks(bool value) const { WriteField<bool>("SkipFullChunks", value); }
        bool ForceSkipFullChunks() const { return ReadField<bool>("ForceSkipFullChunks"); }
        void SetForceSkipFullChunks(bool value) const { WriteField<bool>("ForceSkipFullChunks", value); }
    };
}
