#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class IdentitySectorBorderRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentitySectorBorderRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "IdentitySectorBorderRenderer") {}
    public:
        void Sync(void* groups, float iso, void* style, void* subStyle, void* edgeStyle, void* identity, int axis) const { void* args[] = { groups, &iso, style, subStyle, edgeStyle, identity, &axis }; Call("Sync", args, 7); }
        void EvictGroup(int groupId) const { void* args[] = { &groupId }; Call("EvictGroup", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        float Sample(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Sample", args, 2); }
        bool ChunkHasData(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkHasData", args, 2); }
        void* Page(int cx, int cy) const { void* args[] = { &cx, &cy }; return Call("Page", args, 2); }
        bool ChunkFull(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkFull", args, 2); }
        void* skirtV() const { return ReadField<void*>("skirtV"); }
        void* skirtC() const { return ReadField<void*>("skirtC"); }
        void* skirtT() const { return ReadField<void*>("skirtT"); }
        void* skirtU() const { return ReadField<void*>("skirtU"); }
        void* bandV() const { return ReadField<void*>("bandV"); }
        void* bandC() const { return ReadField<void*>("bandC"); }
        void* bandT() const { return ReadField<void*>("bandT"); }
        void* bandU() const { return ReadField<void*>("bandU"); }
        void* lineV() const { return ReadField<void*>("lineV"); }
        void* lineC() const { return ReadField<void*>("lineC"); }
        void* lineT() const { return ReadField<void*>("lineT"); }
        void* lineU() const { return ReadField<void*>("lineU"); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* mesh() const { return ReadField<void*>("mesh"); }
        void SetMesh(void* value) const { WriteField<void*>("mesh", value); }
        float lastBuild() const { return ReadField<float>("lastBuild"); }
        void SetLastBuild(float value) const { WriteField<float>("lastBuild", value); }
    };
}
