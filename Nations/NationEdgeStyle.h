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
        void* Resolve(void* sampled) const { void* __callArgs[] = { sampled }; return Call("Resolve", __callArgs, 1); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        bool smoothEdges() const { return ReadField<bool>("smoothEdges"); }
        void smoothEdges(bool value) const { WriteField<bool>("smoothEdges", value); }
        float strength() const { return ReadField<float>("strength"); }
        void strength(float value) const { WriteField<float>("strength", value); }
        float insidePx() const { return ReadField<float>("insidePx"); }
        void insidePx(float value) const { WriteField<float>("insidePx", value); }
        float outsidePx() const { return ReadField<float>("outsidePx"); }
        void outsidePx(float value) const { WriteField<float>("outsidePx", value); }
        bool splitAtNeighbours() const { return ReadField<bool>("splitAtNeighbours"); }
        void splitAtNeighbours(bool value) const { WriteField<bool>("splitAtNeighbours", value); }
        float insideFade() const { return ReadField<float>("insideFade"); }
        void insideFade(float value) const { WriteField<float>("insideFade", value); }
        float featherPx() const { return ReadField<float>("featherPx"); }
        void featherPx(float value) const { WriteField<float>("featherPx", value); }
        float shade() const { return ReadField<float>("shade"); }
        void shade(float value) const { WriteField<float>("shade", value); }
    };
}
