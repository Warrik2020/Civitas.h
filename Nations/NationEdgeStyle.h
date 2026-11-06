#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationEdgeStyle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationEdgeStyle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationEdgeStyle") {}
    public:
        void* Resolve(void* sampled) const { void* args[] = { sampled }; return Call("Resolve", args, 1); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        bool smoothEdges() const { return ReadField<bool>("smoothEdges"); }
        void SetSmoothEdges(bool value) const { WriteField<bool>("smoothEdges", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float insidePx() const { return ReadField<float>("insidePx"); }
        void SetInsidePx(float value) const { WriteField<float>("insidePx", value); }
        float outsidePx() const { return ReadField<float>("outsidePx"); }
        void SetOutsidePx(float value) const { WriteField<float>("outsidePx", value); }
        bool splitAtNeighbours() const { return ReadField<bool>("splitAtNeighbours"); }
        void SetSplitAtNeighbours(bool value) const { WriteField<bool>("splitAtNeighbours", value); }
        float insideFade() const { return ReadField<float>("insideFade"); }
        void SetInsideFade(float value) const { WriteField<float>("insideFade", value); }
        float featherPx() const { return ReadField<float>("featherPx"); }
        void SetFeatherPx(float value) const { WriteField<float>("featherPx", value); }
        float shade() const { return ReadField<float>("shade"); }
        void SetShade(float value) const { WriteField<float>("shade", value); }
    };
}
