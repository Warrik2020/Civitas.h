#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class OverlayMaterials : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OverlayMaterials(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "OverlayMaterials") {}
    public:
        void* Create(void* tex) const { void* args[] = { tex }; return CallStatic("Create", args, 1); }
        void* CreateTileSmooth(const char* layerName) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(layerName ? layerName : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("CreateTileSmooth", args, 1); }
        void SetHatch(void* m, float period, float bar, bool antiDiagonal) const { void* args[] = { m, &period, &bar, &antiDiagonal }; CallStatic("SetHatch", args, 4); }
        void* CreateEdgeAA(const char* layerName) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(layerName ? layerName : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("CreateEdgeAA", args, 1); }
        void SetWidthCap(void* m, float refWidth, float maxScreenPx) const { void* args[] = { m, &refWidth, &maxScreenPx }; CallStatic("SetWidthCap", args, 3); }
    };
}
