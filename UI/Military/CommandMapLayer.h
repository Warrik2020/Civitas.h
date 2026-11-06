#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandMapLayer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandMapLayer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandMapLayer") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void Upload() const { Call("Upload", nullptr, 0); }
        void UploadVertices() const { Call("UploadVertices", nullptr, 0); }
        void Fade(float alpha) const { void* args[] = { &alpha }; Call("Fade", args, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Tri(void* a, void* b, void* d, void* col) const { void* args[] = { a, b, d, col }; Call("Tri", args, 4); }
        void Box(float x0, float y0, float x1, float y1, void* col) const { void* args[] = { &x0, &y0, &x1, &y1, col }; Call("Box", args, 5); }
        void Ring(void* centre, float radius, float halfWidth, int segments, void* col) const { void* args[] = { centre, &radius, &halfWidth, &segments, col }; Call("Ring", args, 5); }
        void Star(void* centre, float radius, void* col) const { void* args[] = { centre, &radius, col }; Call("Star", args, 3); }
        float NumberWidth(int value, float height) const { void* args[] = { &value, &height }; return CallStaticValue<float>("NumberWidth", args, 2); }
        void Number(int value, void* at, float height, float stroke, float grow, void* col) const { void* args[] = { &value, at, &height, &stroke, &grow, col }; Call("Number", args, 6); }
        float GroundAlpha(void* map) const { void* args[] = { map }; return CallStaticValue<float>("GroundAlpha", args, 1); }
        void* v() const { return ReadField<void*>("v"); }
        void* c() const { return ReadField<void*>("c"); }
        void* t() const { return ReadField<void*>("t"); }
    };
}
